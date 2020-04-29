import socket

host='localhost'
puerto=1234

scl=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
##Conectamos al puerto y direccion deseadas
scl.connect((host,puerto))
men=input("Introduce el nombre del archivo a enviar\t")
scl.send(bytes(str(men),"utf-8"))

n_arc=input("Como quieres llamar al archivo que vas a rebir")
file=open(n_arc,'wb')
datos=scl.recv(1024)
file.write(datos)

file.close()
scl.close()


