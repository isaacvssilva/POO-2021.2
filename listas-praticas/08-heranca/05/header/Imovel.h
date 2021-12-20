#ifndef IMOVEL_H
#define IMOVEL_H
#include <bits/stdc++.h>

using namespace std;

class Imovel{

private:
    string endereco, bairro;
    float areaUtil, areaTotal;
    int quartos;

public:
    void setEndereco();
    void setBairro();
    void setAreaUtil();
    void setAreaTotal();
    void setQuartos();
    void print();
};

#endif