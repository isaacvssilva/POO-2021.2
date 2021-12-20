#ifndef VENDAS_H
#define VENDAS_H

#include <bits/stdc++.h>
using namespace std;

class Venda{

private:
    float valor;
    int pecas;

public:
    void setValor(float preco);
    void setPecas(int qtd);
    float getValor();
    int getPecas();
    Venda totaliza(Venda v[], int n);
};

#endif