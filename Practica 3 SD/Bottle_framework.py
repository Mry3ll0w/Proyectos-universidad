
from bottle import Bottle, run, template, request

contador_de_identificador = 1


class Habitacion:

    def __init__(self, plazas, equipamiento):
        global contador_de_identificador
        self.codigo = contador_de_identificador
        contador_de_identificador += 1
        self.plazas = 0  # Entero
        self.equipamiento = ''  # Cadena
        self.ocupada = False

        try:
            self.plazas = plazas
            self.equipamiento = equipamiento

        except:
            print("Valores no validos")
    def mostrar(self):
        frase = 'No'  # AL declararlo originalmente como "no" no necesito poner else
        if self.ocupada:
            frase = "Si"

        return template("<p>Habitación: {{cod}}</br>Plazas: {{num_p}}</br>Equipamiento: {{equip}}</br>Ocupada: {{"
                        "ocup}}</br></p>", cod=self.codigo, num_p=self.plazas, equip=self.equipamiento, ocup=frase)

    def ocupar(self):
        self.ocupada = True

    def desocupar(self):
        self.ocupada = False

    def modplazas(self, plazas):
        self.plazas = plazas

    def annadirequipo(self, equipamiento):
        self.equipamiento += ", "
        self.equipamiento += equipamiento

    def sobreescribirequipo(self, equipamiento):
        self.equipamiento = equipamiento

    # def destructor
### Se hace siempre para guardar en la clase habitacion los valores correspondientes
### Para posteriormente trabajar con ellos     
f = open('habitaciones.txt','r')
i=0
j=0
room=[]  
print('A continuacion se mostraran todas la habitaciones disponibles')  
while f.readline():
    h_equipamiento=''
    h_plaza=0
    for j in range(0,2):
        leido=f.readline()
        if j==0:
            h_equipamiento=leido
            print('Equipamiento: ' + h_equipamiento + '\n')
        elif j==1: 
            h_plaza=leido
            print('Plazas de la habitacion: ' + h_plaza + '\n')   
        j=j+1
    hab_l=Habitacion(h_plaza,h_equipamiento)
    room.append(hab_l)
f.close()    
          
    

class Estilo:
    def __init__(self, color):
        self.cabecera = "<body style=\"background-color:" + color + "\">"

    def adornar(self, contenido):
        self.cabecera += contenido
        self.cabecera += "</body>"
        return self.cabecera


app = Bottle()

hab_ocupada = Habitacion(5, "algo guapo")
hab_ocupada.ocupar()
habitaciones = [hab_ocupada, Habitacion(1, "reloj"), Habitacion("aa", "wifi"), Habitacion(3, "termostato")]


# EJEMPLOS------------------------------------------
@app.get('/hello/<name>')
def hello(name):
    return template("<b>{{name}}</b>", name=name)


@app.post('/alta')
def alta():
    try:
        data = request.json()

    except:
        raise ValueError

    return data


@app.post('/datos')
def datos():
    data = alta()
    return data


# EJEMPLOS--------------------------------------------
@app.get('/')
def menu():
    return "<h1>Bienvenido a nuestro fantastico hotel</h1></br><b>Gerencia: <a href=/gerencia>Pulse " \
           "Aquí</a></br>Clientes:</br> Ver habitaciones <a href=/habitaciones>Pulse Aquí</a></b> "


@app.get('/gerencia')  # Puede que sea Post
def menu_administracion():
    return "En proceso"


@app.post('/gerencia/annadir')  # endpoint 1
def annadir():
    re = request.json.get("habitacion")
    habitaciones.append(Habitacion(re.get("plazas"), re.get("equipacion")))


@app.put('/gerencia/<habitacion>')  # endpoint 2
def modificar():
    return "NADA DE MOMENTO"


@app.get('/habitaciones')  # endpoint 3
def mostrartodo():
    ls = ''
    estilo = Estilo("cyan")

    for hab in habitaciones:
        ls += hab.mostrar()

    ls = estilo.adornar(ls)
    return ls


@app.get('/habitaciones/<codigo:int>')  # endpoint 4
def mostrar(codigo):
    ls = habitaciones[codigo-1].mostrar()
    estilo = Estilo("cyan")
    ls = estilo.adornar(ls)
    return ls


@app.get('/habitaciones/<estado:re:ocupadas|desocupadas>')  # endpoint 5
def mostrar(estado):
    ls = ''
    estilo = Estilo("cyan")
    comodin = False

    if estado == 'ocupadas':
        comodin = True

    for hab in habitaciones:
        if hab.ocupada == comodin:
            ls += hab.mostrar()

    ls = estilo.adornar(ls)
    return ls


@app.delete('/gerencia/borrar/<cod:int>')  # endpoint 6
def borrar():
    return "NADA DE MOMENTO"


@app.error(404)
def error404(error):
    return "Dirección Incorrecta"


@app.error(405)
def error405(error):
    return "Operación no permitida"


@app.error(500)
def error500(error):
    return "Fallo del sistema"


run(app, host='localhost', port=8080, debug=True,reloader=True)
