OBJS=main.o Teste.o
all: programa
programa: $(OBJS)
	g++ $(OBJS) -o $@
main.o: main.cpp
	g++ -c main.cpp -o main.o -Wall
Teste.o: Teste.cpp
	g++ -c $< -o $@ -Wall