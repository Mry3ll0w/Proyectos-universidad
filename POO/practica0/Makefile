main: main.o 
	g++  main.o -o main -lm
	./main
	

main.o: main.cpp p0.hpp
	g++ -c main.cpp

clean: 
	$(RM) main.o
