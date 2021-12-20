OBJS = main.o CommissionEmployee.o BasePlusCommissionEmployee.o
all: programa
programa: $(OBJS)
	g++ $(OBJS) -o $@

main.o: main.cpp
	g++ -c main.cpp -o main.o -Wall
CommissionEmployee: CommissionEmployee.cpp
	g++ -c CommissionEmployee.cpp -o CommissionEmployee.o -Wall
BasePlusCommissionEmployee: BasePlusCommissionEmployee.cpp
	g++ -c $< -o $@ -Wall