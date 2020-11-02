import socket
puerto=input("introduce un puerto\n")
ser = socket.socket(socket.AF_INET,socket.SOCK_DGRAM) ## af inet implica ipv4 y dgram udp
ser.bind((socket.gethostname(),int(puerto)))
# se enlaza el socket a la ip local del ordenador y al puerto 1234
while True:
    data,dir=ser.recvfrom(1024)
    if data!="":
        print (f"Mensaje recibido de {dir}: {data}")
        print("Contestale\n")
        data=""
    else:
        print("Envia algo:")
        mens=input()
        mens=str(mens)
        if mens == "-1":
             break
        else:
             ser.sendto(bytes(mens,"utf-8"),(socket.gethostname(),1234))

