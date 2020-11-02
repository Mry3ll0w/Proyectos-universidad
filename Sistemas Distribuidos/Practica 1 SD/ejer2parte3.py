a=list()
b=list() 
a= {2,3,4,5,6}
b= {5,6,7,8,9}
f=open("arc.txt","w")
cadena=a.union(b)
print(cadena)
f.write(str(cadena))
f.close()
