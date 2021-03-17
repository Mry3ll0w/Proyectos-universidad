all:main

main: main.o fecha.o Cadena.o
	g++  main.o fecha.o Cadena.o -o main
	./main
	

main.o: main.cpp fecha.hpp Cadena.hpp
	g++ -c main.cpp  

fecha.o: fecha.cpp fecha.hpp
	g++ -c fecha.cpp

Cadena.o: Cadena.cpp Cadena.hpp
	g++ -c Cadena.cpp

clean: 
	rm main.o fecha.o Cadena.o main
	clear

clean_win:
	del main.o fecha.o Cadena.o main.exe
	cls