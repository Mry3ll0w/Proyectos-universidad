import socket
import os


HOST = 'localhost'
PORT = 1234
udpserver= socket.socket (socket.AF_INET,socket.SOCK_DGRAM)
seguridad=1

men="soy el cliente"
udpserver.sendto(men, (HOST,PORT) )
cl2 = udpserver.recvfrom(1024)
print("Conexion establecida")
while seguridad==1:
    print("Escriba mensaje")
    otro=input()
    if str(cl2) == "b'-1'":
        seguridad=0
    
    udpserver.sendto(cl2, (HOST,PORT))
    if seguridad==1:
        mensaje = udpserver.recv(1024).decode()
        print(""+str(mensaje))
        if str(mensaje) == "desconectar":
            print("Usuario desconectado,  para aplicar salida segura 'cierre'")
            cl2 =input()
            if str(cl2) == "b'cierre'":
                seguridad=0
                print("aplicando cierre seguro")
udpserver.close()