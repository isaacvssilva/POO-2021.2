#include "BasePlusCommissionEmployee.h"
#include <bits/stdc++.h>

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate, double salary) : CommissionEmployee(first, last, ssn, sales, rate){

    //valida e armazena salario-base
    setBaseSalary(salary);
}

//configura salario-base
void BasePlusCommissionEmployee::setBaseSalary(double salary){
    baseSalary = (salary < 0.0) ? 0.0 : salary;
}

//retornando salario-base
double BasePlusCommissionEmployee::getBaseSalary()const{
    return baseSalary;
}

// calculando rendimentos
double BasePlusCommissionEmployee::earnings() const{
    return getBaseSalary() + CommissionEmployee::earnings();
}

//imprimindo objeto
void BasePlusCommissionEmployee::print() const{

   cout << "base-salried ";

   //invocando funcao print de CommissionEmployee
   CommissionEmployee::print();
   cout << "\nbase salary: " << getBaseSalary();
}