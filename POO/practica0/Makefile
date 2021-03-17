ejecutables= test-P0-auto test-P0-consola
compiler= g++
compilerflags=-pedantic -g -wall -std=c++11
c++flags=-DP0 -I../Test-auto -I
path = ../Test-auto:..
clases= fecha.o cadena.o

.PHONY: all clean

all: $(ejecutables)

test-PO-auto: test-caso0-fecha-auto.o test-caso0-cadena-auto.o test-auto.o $(ejecutables)
	$(compiler) $(compilerflags) $^ -o $@

test-case0-fecha-auto.o test-caso0-cadena-auto.o test-auto.o:\
	test-caso0-fecha-auto.cpp test-caso0-cadena-auto.cpp \
	test-auto.cpp test-auto.hpp fecha.hpp cadena.hpp

test-P0-consola: test-P0-consola.o $(clases)
	$(compiler) $(compilerflags) $^ -o $@

clean:
	@$(rm) $(ejecutables) *.o