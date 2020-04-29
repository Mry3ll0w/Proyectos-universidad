import socket
server_tcp=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
HOST='localhost'
puerto=1234
server_tcp.bind((HOST,puerto))
server_tcp.listen(1)
##Aceptamos las conexiones
print("Servidor en espera")
socket_cl,direc = server_tcp.accept()

men=socket_cl.recv(1024)
print(f"Datos recibidos de {direc}:{men}")

file=open(men,'rb')
datos_Ar=file.read(1024)
socket_cl.send(datos_Ar)
print("Datos enviados\n")

socket_cl.close()##Cerramos la conexion
server_tcp.close()

