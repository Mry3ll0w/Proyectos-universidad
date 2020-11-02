import socket

cl =socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
print ("Podras enviar mensajes mientras no introduzcas -1")
puerto=input("introduce un puerto\n")
while True:
    
    mens=input()
    mens=str(mens)
    if mens == "-1":
        break
    else:
        cl.sendto(bytes(mens,"utf-8"),(socket.gethostname(),int(puerto)))