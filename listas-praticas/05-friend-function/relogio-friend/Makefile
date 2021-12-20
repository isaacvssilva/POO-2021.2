OBJS = RelogioFriend.o main.o
all: programa
programa: $(OBJS)
	g++ $(OBJS) -o $@

RelogioFriend.o: RelogioFriend.cpp
	g++ -c RelogioFriend.cpp -o RelogioFriend.o -Wall
main.o: main.cpp
	g++ -c main.cpp -o main.o -Wall