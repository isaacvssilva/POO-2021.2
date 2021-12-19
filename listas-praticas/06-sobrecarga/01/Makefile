OBJS = NumeroTelefone.o main.o
all: programa
programa: $(OBJS)
	g++ $(OBJS) -o $@

NumeroTelefone.o: NumeroTelefone.cpp
	g++ -c NumeroTelefone.cpp -o NumeroTelefone.o -Wall
main.o: main.cpp
	g++ -c main.cpp -o main.o -Wall