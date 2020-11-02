 
import socket
 
HOST ='localhost'
PORT = 1234

socketServidor = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

socketServidor.bind((HOST, PORT))
socketServidor.listen(5)

print("Servidor a la espera\n")

s_cliente, addr = socketServidor.accept()


print("El servidor se mantendra abierto hasta que introduzcas -1\n")
while True:
    men_recibido=s_cliente.recv(1024)
    if str(men_recibido)=="-1":
        break
    
    else:
        print("Recibido del cliente: "+str(men_recibido))
    
        men_resp=input("Introduce tu respuesta")
        
        if men_resp=="-1":
            break
    
        s_cliente.send(men_resp)
        
    

s_cliente.close( )
socketServidor.close() 
