OBJS = Relogio.o RelogioComAlarme.o main.o
all: programa
programa: $(OBJS)
	g++ $(OBJS) -o $@
	
main.o: main.cpp
	g++ -c main.cpp -o main.o -Wall
Relogio.o: Relogio.cpp
	g++ -c Relogio.cpp -o Relogio.o -Wall
RelogioComAlarme.o: RelogioComAlarme.cpp
	g++ -c RelogioComAlarme.cpp -o RelogioComAlarme.o -Wall