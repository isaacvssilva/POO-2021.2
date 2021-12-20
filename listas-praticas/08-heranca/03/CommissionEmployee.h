#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include <bits/stdc++.h>

using namespace std;

//classe que ira representar os funcionarios comissionados
class CommissionEmployee{
  
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    //vendas brutas semanais 
    double grossSales;
    //porcentagem da comissao
    double commissionRate;

public:
/*
->  getters declarado como const - nao podem alterar o valor de um argumento
*/
    CommissionEmployee(
        const string &, const string &, const string &,
        double = 0.0, double = 0.0
    );

    //configurando o nome
    void setFirstName(const string &);
    //retornando nome
    string getFirstName() const;
    //configurando o sobrenome
    void setLastName(const string &);
    //retornando sobrenome
    string getLastName() const;
    //configura o SSN
    void setSocialSecurityNumber(const string &);
    //retornando o SSN
    string getSocialSecurityNumber() const;
    //configura quantidade de vendas brutas
    void setGrossSales(double);
    //retornando quantidade de vendas brutas
    double getGrossSales() const;
    //configura taxa de comissao 
    void setCommissionRate(double);
    //retornando a taxa de comissao
    double getCommissionRate() const;
    //calculando rendimentos
    double earnings() const;
    //imprimindo objeto
    void print() const;
};
#endif