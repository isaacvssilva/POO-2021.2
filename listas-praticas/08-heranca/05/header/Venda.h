#ifndef VENDA_H
#define VENDA_H
#include "Cadastro.h"
#include "Imovel.h"
#include "Tipo.h"

#include <bits/stdc++.h>

using namespace std;

//heranca multipla
class Venda: private Cadastro, Imovel, Tipo{

private:
    float valor;

public:
    void set();
    void print();
};
#endif