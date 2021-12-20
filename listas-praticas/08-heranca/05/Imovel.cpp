#include "header/Imovel.h"
#include <bits/stdc++.h>

using namespace std;

void Imovel::setEndereco(){
    cout << "Endereco:" << endl;
    getline(cin,endereco);
}
void Imovel::setBairro(){
    cout << "Bairro:" << endl;
    getline(cin, bairro);
}
void Imovel::setAreaUtil(){
    cout << "Area util:" << endl;
    cin >> areaUtil;
}
void Imovel::setAreaTotal(){
    cout << "Area total:" << endl;
    cin >> areaTotal;
}
void Imovel::setQuartos(){
    cout << "Numero de quartos:" << endl;
    cin >> quartos;
}
void Imovel::print(){
    
    cout << "Endereco:" << endereco << endl;
    cout << "Bairro:" << bairro << endl;
    cout << "Area util:" << areaUtil << endl;
    cout << "Area total:" << areaTotal << endl;
    cout << "Quartos:" << quartos << endl;
}