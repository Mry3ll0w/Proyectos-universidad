import socket

host='localhost'
puerto=1234

scl=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
##Conectamos al puerto y direccion deseadas
scl.connect((host,puerto))
recibido=scl.recv(1024)
##Introducir nombre del archivo para recibir
print(f"Lista de archivos disponibles para transferencia: {recibido}")
men=input("Introduce el nombre del archivo de la lista \t")
scl.send(bytes(str(men),"utf-8"))

n_arc=input("Como quieres llamar al archivo que vas a rebir (incluye su extension)")
file=open(n_arc,'wb')
datos=scl.recv(1024)
file.write(datos)

file.close()
scl.close()


