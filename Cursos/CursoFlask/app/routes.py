from flask import render_template, url_for, flash, redirect, request
from app.forms import RegisterForm, LoginForm, UpdateAccountForm
from app.models import User, Post
from app import app, db, bcrypt
from flask_login import login_user, current_user, logout_user, login_required
import secrets
import os
from PIL import Image

post = [
    {
        'author': 'Antonio Roldan',
        'title': 'Primera entrada de Blog',
        'content': 'Hola esta es mi primera entrada del blog q estoy creando',
        'date_posted': '09/12/20'
    },
    {
        'author': 'Mamario',
        'title': 'La verdad sobre el kebab',
        'content': 'El kebab es una comida muy popular sin embargo no todos saben disfrutarlo',
        'date_posted': '09/12/20'}

]



@app.route('/')
@app.route('/home')
def home():
    return render_template('home.html', posts=post)


@app.route('/about')
def about_page_hello():
    return render_template('about.html', title='About')


@app.route('/forgotpass')
def forgot_pswd():
    return "<h1> In developement </h1>"


@app.route('/register', methods=['GET', 'POST'])
def register():
    if current_user.is_authenticated:
        return redirect(url_for('home'))
    formu = RegisterForm()
    if formu.validate_on_submit():
        hashed_password = bcrypt.generate_password_hash(formu.password.data).decode('utf-8')
        user = User(username=formu.username.data, email=formu.email.data, password=hashed_password)  #Se pasa la hashed passw para evitar si roban la database puedan ver contraseñas en texto plano
        db.session.add(user)
        db.session.commit()
        flash(f'Cuenta creada correctamente !!!', 'success')
        return redirect(url_for('login'))

    return render_template('register.html', title='Registro del usuario', form=formu)


@app.route('/login', methods=['GET', 'POST'])
def login():
    if current_user.is_authenticated:
        return redirect(url_for('home'))

    formu = LoginForm()
    if formu.validate_on_submit():       
            user = User.query.filter_by(email=formu.email.data).first()
            if user and bcrypt.check_password_hash(user.password,formu.password.data):
                login_user(user,remember=formu.remember.data)
                next_page = request.args.get('next')
                flash(f'¡¡¡Bienvenido !!!','success')
                return redirect(next_page) if next_page else redirect(url_for('home'))
            else:    
                flash(f'Error en el usuario y/o contraseña', 'danger')

    return render_template('login.html', title='Login del usuario', form=formu)


@app.route('/logout')
def logout():
        logout_user()
        return redirect(url_for('home'))


def save_picture(form_picture):
    random_hex = secrets.token_hex(8)
    _, f_ext = os.path.splitext(form_picture.filename)
    picture_fn = random_hex + f_ext
    picture_path = os.path.join(app.root_path, 'static/profile_pics', picture_fn)
    form_picture.save(picture_path)
    
    output_size = (125, 125)
    i = Image.open(form_picture)
    i.thumbnail(output_size)
    i.save(picture_path)
    return picture_fn


@app.route('/account', methods=['GET','POST'])
@login_required
def account():
    form = UpdateAccountForm()
    if form.validate_on_submit():
        if form.picture.data:
            picture_file = save_picture(form.picture.data)
            current_user.username = form.username.data
        current_user.image_file = picture_file
        current_user.email = form.email.data
        db.session.commit()
        flash('Se ha acualizacdo su cuenta','success')
        return redirect(url_for('account'))
    elif request.method == 'GET':
        form.username.data = current_user.username
        form.email.data = current_user.email
    image_file = url_for('static', filename='profile_pics/' + current_user.image_file)
    return render_template('account.html', title='Mi cuenta', 
                            image_file=image_file, form=form)