import os
comilla=', '
lista=os.listdir()
for i in range(len(lista)):
    mensaje=str(lista[i]) + ", " 
    

for i in range(len(mensaje)):
    cadena=f"{mensaje[i]}, "

print (cadena)