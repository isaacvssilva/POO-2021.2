#include "header/Cadastro.h"
#include <bits/stdc++.h>

using namespace std;

void Cadastro::setNome(){

    cout << "Nome:" << endl;
    getline(cin, nome);
}

void Cadastro::setTelefone(){
    cout << "Telefone:" << endl;
    getline(cin, telefone);
}
void Cadastro::print(){
    
    cout << "Nome:" << nome << endl;
    cout << "Telefone:" << telefone << endl;
}