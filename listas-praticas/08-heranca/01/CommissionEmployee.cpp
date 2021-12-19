#include "CommissionEmployee.h"
#include <bits/stdc++.h>

CommissionEmployee::CommissionEmployee
(const string &first, const string &last, const string &ssn, 
double sales, double rate){

    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    //valida e armazena as vendas
    setGrossSales(sales);
    //valida e armazena as taxas de comissao
    setCommissionRate(rate);
}

//configurando o nome
void CommissionEmployee::setFirstName(const string &first){
    firstName = first;
}

//retornando nome
string CommissionEmployee::getFirstName() const{
    return firstName;
}

//configurando o sobrenome
void CommissionEmployee::setLastName(const string &last){
    lastName = last;
}

//retornando sobrenome
string CommissionEmployee::getLastName() const{
    return lastName;
}

//configura o SSN
void CommissionEmployee::setSocialSecurityNumber(const string &ssn){
    socialSecurityNumber = ssn;
}

//retornando o SSN
string CommissionEmployee::getSocialSecurityNumber() const{
    return socialSecurityNumber;
}

//configura quantidade de vendas brutas
void CommissionEmployee::setGrossSales(double sales){
    grossSales = (sales < 0.0) ? 0.0 : sales;
}

//retornando quantidade de vendas brutas
double CommissionEmployee::getGrossSales() const{
    return grossSales;
}

//configura taxa de comissao 
void CommissionEmployee::setCommissionRate(double rate){
    commissionRate = (rate > 0.0 and rate < 1.0) ? rate : 0.0;
}

//retornando a taxa de comissao
double CommissionEmployee::getCommissionRate() const{
    return commissionRate;
}

//calculando rendimentos
double CommissionEmployee::earnings() const{
    return commissionRate * grossSales;
}

//imprimindo objeto
void CommissionEmployee::print() const{
    cout << "comission employee: " << firstName << " " << lastName <<endl;
    cout << "social security number: " << socialSecurityNumber << endl;
    cout << "gross sales: " << grossSales << endl;
    cout << "commission rate: " << commissionRate << endl;
}