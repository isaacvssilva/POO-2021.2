OBJS = main.o BasePlusCommissionEmployee.o
all: programa
programa: $(OBJS)
	g++ $(OBJS) -o $@

main.o: main.cpp
	g++ -c main.cpp -o main.o -Wall
BasePlusCommissionEmployee.o: BasePlusCommissionEmployee.cpp
	g++ -c $< -o $@ -Wall