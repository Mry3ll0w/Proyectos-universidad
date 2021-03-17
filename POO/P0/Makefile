ejecutables= test-P0-auto test-P0-consola
CXX= g++
CXXFLAGS=-pedantic -g -wall -std=c++11
CPPFLAGS=-DP0 -I../Test-auto -I
VPATH = ../Test-auto:..
clases= fecha.o cadena.o

.PHONY: all clean

all: $(ejecutables)

test-P0-auto: test-caso0-fecha-auto.o test-caso0-cadena-auto.o \
test-auto.o cadena.o fecha.o


test-caso0-fecha-auto.o test-caso0-cadena-auto.o test-auto.o: \
test-caso0-fecha-auto.cpp test-caso0-cadena-auto.cpp \
test-auto.cpp test-auto.hpp fecha.hpp cadena.hpp


test-fechachadena-consola: test-P0-consola.o $(clases)
	$(CXX) $(CXXflags) $^ -o $@

clean:
	@$(rm) $(ejecutables) *.o