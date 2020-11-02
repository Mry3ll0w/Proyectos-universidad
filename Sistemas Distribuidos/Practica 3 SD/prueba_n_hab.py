import requests

lista_de_hab = requests.get("http://localhost:8080/habitaciones") 
hab_buscada=input("Introduce el numero de habitacion que estas buscando: ")
buscador='Habitación: '+hab_buscada
if(str(buscador) in lista_de_hab.text)==True:
    url="http://localhost:8080/habitaciones/"+hab_buscada
    hab_concreta=requests.get(url)
    print(hab_concreta.text)
else:
    print("No hay una habitacion con ese codigo")        