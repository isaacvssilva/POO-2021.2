#include "header/Venda.h"
#include <bits/stdc++.h>

using namespace std;

void Venda::set(){

    cout << "Proprietario:" << endl;
    Cadastro::setNome();
    Cadastro::setTelefone();

    cout << "Imovel:" << endl;
    Imovel::setEndereco();
    Imovel::setBairro();
    Imovel::setAreaTotal();
    Imovel::setAreaUtil();
    Tipo::setTipoImovel();

    cout << "Valor de venda:" << endl;
    cin >> valor;
    cin.ignore(10,'\n');
}

void Venda::print(){
    
    cout << "Proprietario:" << endl;
    Cadastro::print();
    cout << "Imovel:" << endl;
    Imovel::print();
    Tipo::print();
    cout << "Valor: $" << valor << endl;
}