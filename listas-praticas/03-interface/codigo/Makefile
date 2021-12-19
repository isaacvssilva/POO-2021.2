OBJS=main.o Livro.o
all: programa
programa: $(OBJS)
	g++ $(OBJS) -o $@
main.o: main.cpp
	g++ -c main.cpp -o main.o -Wall
Livro.o: Livro.cpp
	g++ -c $< -o $@ -Wall
