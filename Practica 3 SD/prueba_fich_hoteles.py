import pickle

class Habitacion:
    def __init__(self,codigo,plazas,equipamiento,ocupada):
        self.codigo=codigo
        self.plazas=plazas
        self.equipamiento=equipamiento
        self.ocupada=False
room=[]    
#Iniciamos la lectura del archivo
opcion=input("1)Dar De alta Habitaciones\n2)Mostrarlas\n")
if opcion=='1':
    f = open('habitaciones.txt','a')
    N=input("Introduce cuantas habitaciones quieres dar de alta")
    for i in range(int(N)) :
        codigo=input("introduce el codigo de la habitacion: ")
        plazas=input("Introduce el equipamiento: ")
        equipamiento=input("cuantas plazas tiene: ")
        f.write(str(codigo))
        f.write(str("\n"))
        f.write(str(plazas))
        f.write(str("\n"))
        f.write(str(equipamiento))
        
        
        room_agregar=Habitacion(codigo,plazas,equipamiento,False)
        room.append(room_agregar)
        
#Mostrar las habitaciones     
if opcion=='2':
   
    f = open('habitaciones.txt','r')
    i=0
    j=0
    
    while f.readline():
      
      for j in range(0,3):
        leido=f.readline()
        if j==0:
            h_codigo=leido
            print('El codigo de la habitacion es: '+ h_codigo + '\n')
        elif j==1: 
            h_equipamiento=leido
            print('Equipamiento: ' + h_equipamiento + '\n')
        elif j==2:
            h_plazas=leido
            print('Plazas de la habitacion: ' + h_plazas + '\n')
             
        j=j+1
      
      hab_l=Habitacion(h_codigo,h_plazas,h_equipamiento,False)
      room.append(hab_l)
    
                                

          
    