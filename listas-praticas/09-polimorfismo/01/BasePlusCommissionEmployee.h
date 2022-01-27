#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include "CommissionEmployee.h"
#include <bits/stdc++.h>

class BasePlusCommissionEmployee : public CommissionEmployee{

private:
   double baseSalary; // salário-base

public:
   BasePlusCommissionEmployee(const string &, const string &, const string &,
   double = 0.0, double = 0.0, double = 0.0);

   void setBaseSalary( double ); // configura o salário-base
   double getBaseSalary() const; // retorna o salário-base
   
   virtual double earnings() const; // calcula os rendimentos
   virtual void print() const; // imprime o objeto BasePlusCommissionEmployee
};
#endif