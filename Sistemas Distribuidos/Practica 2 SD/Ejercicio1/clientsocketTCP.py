import socket
import os 

Host='localhost'
puerto= 1234

s_cliente=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s_cliente.connect((Host,puerto))

s_cliente.send(bytes("Hola servidor","utf-8"))

mens=s_cliente.recv(1024)

print(f"Se ha recibido:{mens}")

s_cliente.close()