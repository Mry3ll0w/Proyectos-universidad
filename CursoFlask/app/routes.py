from flask import render_template, url_for, flash, redirect, request
from app.forms import RegisterForm, LoginForm
from app.models import User, Post
from app import app, db, bcrypt
from flask_login import login_user, current_user, logout_user, login_required


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


@app.route('/account')
@login_required
def account():
    return render_template('account.html', title='Mi cuenta')