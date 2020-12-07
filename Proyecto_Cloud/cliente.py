import socket

s = socket.socket()
host = input(str("Insert the adr of socket: "))
port = 8080
s.connect((host,port))