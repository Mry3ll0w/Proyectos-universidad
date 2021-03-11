all:main
main: main.o fecha.o cadena.o
	g++  main.o fecha.o cadena.o -o main
	./main
	

main.o: main.cpp fecha.hpp Cadena.hpp
	g++ -c main.cpp  

fecha.o: fecha.cpp fecha.hpp
	g++ -c fecha.cpp

cadena.o: Cadena.cpp Cadena.hpp
	g++ -c Cadena.cpp

clean: 
	rm main.o fecha.o Cadena.hpp main
