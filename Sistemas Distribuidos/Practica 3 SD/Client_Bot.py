import requests
import json

###Menu 
while True: #Por si acaso quiere hacer mas cosas de una vez
    print('Bienvenido a continuacion se mostrará que puedes hacer:\n')
    print('1)Dar de alta una habitación\n')
    print('2)Modificar los datos de una habitacion\n')
    print('3)Consultar la lista de habitaciones\n')
    print('4)Consultar una habitacion concreta\n')
    print('5)Consultar la lista de habitaciones ocupadas/Desocupadas\n')
    opcion=input('Selecciona la opcion de la lista\n')
    
    if opcion=='1': ##Esta funcionando
        URL = "http://localhost:8080/gerencia/annadir"
        f = open('habitaciones.txt','a')
        N = input("Introduce cuantas habitaciones quieres dar de alta")
        for i in range(int(N)) :
            plazas=input("cuantas plazas tiene: ")
            equipamiento=input("Introduce el equipamiento: ")
            f.write(str(plazas))
            f.write(str("\n"))
            f.write(str(equipamiento))
            f.write(str("\n"))
            data = {"habitacion": {"plazas": int(plazas), "equipacion": equipamiento}}
            rsp = requests.post(url = URL, json = data)
    elif opcion=='2':
         print('aun no')
    elif opcion=='3': #donete
        lista_de_hab = requests.get("http://localhost:8080/habitaciones")
        print(lista_de_hab.text)
    elif opcion=='4': #Donete
        lista_de_hab = requests.get("http://localhost:8080/habitaciones") 
        hab_buscada=input("Introduce el numero de habitacion que estas buscando: ")
        buscador='Habitación: '+hab_buscada
        if(str(buscador) in lista_de_hab.text)==True: #Problema con los codigos de habitacion
            url="http://localhost:8080/habitaciones/"+hab_buscada
            hab_concreta=requests.get(url)
            print(hab_concreta.text)
        else:
            print("No hay una habitacion con ese codigo")  
    elif opcion=='5':               
        opcion=input("Que deseas consultar: 1) Habitaciones Ocupadas 2)Libres\n")
        if opcion == '1':
            url="http://localhost:8080/habitaciones/ocupadas"
            hab_ocupadas =requests.get(url)
            print(hab_ocupadas.text)
        elif opcion == '2':
            url="http://localhost:8080/habitaciones/desocupadas"
            hab_desocupadas=requests.get(url)
            print(hab_desocupadas.text)
        else:
            print("Opcion introducida no existe")        
    mas=input('Deseas hacer alguna operacion mas?(introduce si/no)\n')
    if mas == 'no':
        break

