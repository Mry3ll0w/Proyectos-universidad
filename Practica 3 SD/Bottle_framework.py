from bottle import route, run, template, request, post, get, error
import json

#El servicio deberá implementar, mínimo, los siguientes endpoints:
# 1. Dar de alta una nueva habitación.
# 2. Modificar los datos de una habitación.
# 3. Consultar la lista completa de habitaciones.
# 4. Consultar una habitación mediante identificador.
# 5. Consultar la lista de habitaciones ocupadas o desocupadas.

##Creamos la clase Hotel 
class Habitacion:
    def __init__(self,codigo,plazas,equipamiento,ocupada):
        self.codigo=codigo
        self.plazas=plazas
        self.equipamiento=equipamiento
        self.ocupada=False
        
#######
#METODO PARA LEER DE FICHEROS HOTELES Y PONERLOS EN UN DICCIONARIO
#######
habitacion=[
    {'num':'200','plazas':'4','equipamiento':'Mesa,Cama'},
    {'num':'300','plazas':'5','equipamiento':'Silla,tele,cama'},
    {'num':'291','plazas':'2','equipamiento':'Silla,cama,ducha,ordenador'}]

@error(500)
def error500(error):
    return '<b>Sea lo que sea que estas buscando no exite esa opcion o ese numero</b>'

@route('/hello')
def hello():
    return '<h>Hola Cliente, bienvenido</h><p>A continuacion veras las opciones que tienes disponibles: </p><p>1)Dar de alta una nueva habitacion</p> <p>2. Modificar los datos de una habitación</p> <p>3. Consultar la lista completa de habitaciones.</p> <p>4. Consultar una habitación mediante identificador. </p> <p>5. Consultar la lista de habitaciones ocupadas o desocupadas. </p>'
@route('/')
def raiz():
    return '<h>Vete a /hello para ver el menu completo por favor</h>'
#Ruta para dar de alta una habitacion
@post('/1')
def add_hab():
    nueva_hab={'num':request.json.get('num'),'plazas':request.json.get('plazas'),'equipamiento':request.json.get('equipamiento')}
    habitacion.append(nueva_hab)
    
#Ruta para modificar el contenido de las habitaciones
@get('/2/<numero>')
def busqueda_hab(numero):
    hab_concreta=[hab for hab in habitacion if hab['num']==numero]
    return {'habitacion':hab_concreta[0]}#Primer elemento que coincida

    
#Opcion 3 permite listar todas las habitaciones disponibles    
@get('/3')
def listar():
    return {'habitacion':habitacion}

    
run(host='192.168.1.105', port=8080, debug=True,reloader=True)

