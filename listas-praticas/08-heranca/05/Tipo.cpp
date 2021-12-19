#include "header/Tipo.h"
#include <bits/stdc++.h>

using namespace std;

void Tipo::setTipoImovel(){
    cout << "Tipo do imovel:" << endl;
    getline(cin, tipoImovel);
    cin.ignore(10,'\n');
}

void Tipo::print(){
    cout << "Tipo do imovel:" << tipoImovel << endl;
}