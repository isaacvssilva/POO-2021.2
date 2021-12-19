#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include "CommissionEmployee.h"
#include <bits/stdc++.h>

using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee{

private:
    double baseSalary;

public:
/*
->  getters declarado como const - nao podem alterar o valor de um argumento
*/
    BasePlusCommissionEmployee(
        const string &, const string &, const string &,
        double = 0.0, double = 0.0, double = 0.0
    );
    //configura salario-base
    void setBaseSalary(double);
    //retornando salario-base
    double getBaseSalary()const;
    //calculando rendimentos
    double earnings() const;
    //imprimindo objeto
    void print() const;
};

#endif