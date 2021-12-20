#include "BasePlusCommissionEmployee.h"
#include <bits/stdc++.h>

//BASE
BasePlusCommissionEmployee::BasePlusCommissionEmployee
(const string &first, const string &last, const string &ssn, 
double sales, double rate, double salary){


    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    //valida e armazena as vendas
    setGrossSales(sales);
    //valida e armazena as taxas de comissao
    setCommissionRate(rate);
    //valida e armazena salario-base
    setBaseSalary(salary);
}

//configurando o nome
void BasePlusCommissionEmployee::setFirstName(const string &first){
    firstName = first;
}

//retornando nome
string BasePlusCommissionEmployee::getFirstName() const{
    return firstName;
}

//configurando o sobrenome
void BasePlusCommissionEmployee::setLastName(const string &last){
    lastName = last;
}

//retornando sobrenome
string BasePlusCommissionEmployee::getLastName() const{
    return lastName;
}

//configura o SSN
void BasePlusCommissionEmployee::setSocialSecurityNumber(const string &ssn){
    socialSecurityNumber = ssn;
}

//retornando o SSN
string BasePlusCommissionEmployee::getSocialSecurityNumber() const{
    return socialSecurityNumber;
}

//configura quantidade de vendas brutas
void BasePlusCommissionEmployee::setGrossSales(double sales){
    grossSales = (sales < 0.0) ? 0.0 : sales;
}

//retornando quantidade de vendas brutas
double BasePlusCommissionEmployee::getGrossSales() const{
    return grossSales;
}

//configura salario-base
void BasePlusCommissionEmployee::setBaseSalary(double salary){
    baseSalary = (salary < 0.0) ? 0.0 : salary;
}

//retornando salario-base
double BasePlusCommissionEmployee::getBaseSalary()const{
    return baseSalary;
}

//configura taxa de comissao 
void BasePlusCommissionEmployee::setCommissionRate(double rate){
    commissionRate = (rate > 0.0 and rate < 1.0) ? rate : 0.0;
}

//retornando a taxa de comissao
double BasePlusCommissionEmployee::getCommissionRate() const{
    return commissionRate;
}

//calculando rendimentos
double BasePlusCommissionEmployee::earnings() const{
    return baseSalary + (commissionRate * grossSales);
}

//imprimindo objeto
void BasePlusCommissionEmployee::print() const{

    cout << "comission employee: " << firstName << " " << lastName <<endl;
    cout << "social security number: " << socialSecurityNumber << endl;
    cout << "gross sales: " << grossSales << endl;
    cout << "commission rate: " << commissionRate << endl;
    cout << "base salary: " << baseSalary << endl;
}