all:main
main: main.o fecha.o
	g++  main.o fecha.o -o main
	./main
	

main.o: main.cpp fecha.hpp
	g++ -c main.cpp  

fecha.o: fecha.cpp fecha.hpp
	g++ -c fecha.cpp


clean: 
	rm main.o fecha.o main
