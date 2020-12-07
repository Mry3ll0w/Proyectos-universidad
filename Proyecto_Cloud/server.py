import socket                   # Import socket module

port = 8080                    # Reserve a port for your service.
s = socket.socket()             # Create a socket object
host = socket.gethostname()     # Get local machine name
print (str(host))                      # Display host addr
s.bind((host, port))            # Bind to the port
s.listen(5)                     # Now wait for client connection.
print("Server ready and awaiting connections")
conn, addr =s.accept()
print ("Established connection with: ", addr)
