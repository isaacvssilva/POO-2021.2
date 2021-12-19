#include "CommissionEmployee.h"
#include <bits/stdc++.h>

CommissionEmployee::CommissionEmployee(
const string &first, const string &last, const string &ssn, 
double sales, double rate) : firstName(first), lastName(last), socialSecurityNumber(ssn){

    //valida e armazena as vendas
    setGrossSales(sales);
    //valida e armazena as taxas de comissao
    setCommissionRate(rate);
}

//calculando rendimentos
double CommissionEmployee::earnings() const{
    return getCommissionRate() * getGrossSales();
}

//imprimindo objeto
void CommissionEmployee::print() const{
    cout << "comission employee: " << getFirstName() << " " << getLastName() << endl;
    cout << "social security number: " << getSocialSecurityNumber() << endl;
    cout << "gross sales: " << getGrossSales() << endl;
    cout << "commission rate: " << getCommissionRate() << endl;
}
