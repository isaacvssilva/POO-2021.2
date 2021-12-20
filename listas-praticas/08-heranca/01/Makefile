OBJS=main.o CommissionEmployee.o
all: programa
programa: $(OBJS)
	g++ $(OBJS) -o $@

main.o: main.cpp
	g++ -c main.cpp -o main.o -Wall
CommissionEmployee.o: CommissionEmployee.cpp
	g++ -c $< -o $@ -Wall