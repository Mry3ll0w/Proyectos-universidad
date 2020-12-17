from flask_wtf import FlaskForm
from wtforms import StringField, PasswordField, SubmitField, BooleanField
from wtforms.validators import DataRequired, Length, Email, EqualTo, ValidationError
from app.models import User


class RegisterForm(FlaskForm):
    username = StringField('Usuario',
                           validators=[DataRequired(), Length(min=4, max=15)])
    email = StringField('Correo electronico',
                        validators=[DataRequired(), Email()])
    password = PasswordField('Contraseña',
                             validators=[DataRequired(), Length(min=4, max=20), EqualTo('password')])
    confirmPassword = PasswordField('Confirma la Contraseña',
                                    validators=[DataRequired(), EqualTo('password')])
    submit = SubmitField('Registrame')

    def validate_username(self, username):
        user = User.query.filter_by(username=username.data).first()
        if user:
            raise ValidationError('Este nombre de usuario esta en uso. Elija otro ')

    def validate_email(self, email):
        user = User.query.filter_by(email=email.data).first()
        if user:
            raise ValidationError('Este email esta en uso, utilice otro')    



class LoginForm(FlaskForm):

    email = StringField('Correo Electronico',
                        validators=[DataRequired(), Email()])
    password = PasswordField('Contraseña',
                             validators=[DataRequired(), Length(min=4, max=20), EqualTo('password')])
    remember = BooleanField('Recuerdame')
    submit = SubmitField('Iniciar sesión')
