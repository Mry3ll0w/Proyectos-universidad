compilation: main.o 
	gcc main.o -o compilation
	./compilation.exe

main.o: main.c lib/core.h
	gcc -c main.c 

clean:
	rm *.o 
	rm *.exe

