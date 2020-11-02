import socket

HOST = 'localhost'
PORT = 1234
s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.connect((HOST, PORT))

print("Podras enviar mensajes mientras no introduzcas -1")
while True:
    
    men=input("enviar al servidor: ")
    
    s.send(men)

    if men=="-1":
        break;

    else:
        men_recibido=s.recv(1024)     
        if men_recibido=="-1":
            break
        else:
            print("Respuesta del servidor: " + men_recibido)
 
 
s.close()
