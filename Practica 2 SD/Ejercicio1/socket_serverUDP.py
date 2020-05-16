import socket

ser = socket.socket(socket.AF_INET,socket.SOCK_DGRAM) ## af inet implica ipv4 y dgram udp
ser.bind((socket.gethostname(),1234))
# se enlaza el socket a la ip local del ordenador y al puerto 1234
while True:
    data,dir=ser.recvfrom(1024)
    print (f"Mensaje recibido de {dir}: {data}")
    

