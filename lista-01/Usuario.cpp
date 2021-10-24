#include <bits/stdc++.h>
#include "Usuario.h"

using namespace std;

//getter
string Usuario::getNome(){
   return this->nome;
}
string Usuario::getOcupacao(){
    return this->ocupacao;
}
string Usuario::getEmail(){
    return this->email;
}
string Usuario::get_palavraChave(){
    return this->palavraChave;
}
int Usuario::getIdade(){
    return this->idade;
}
char Usuario::getSexo(){
    return this->sexo;
}

//setter
void Usuario::setNome(string nome){
    this->nome = nome;
}
void Usuario::setOcupacao(string ocupacao){
    this->ocupacao = ocupacao;
}
void Usuario::setEmail(string email){
    this->email = email;
}
void Usuario::set_palavraChave(string palavraChave){
    this->palavraChave = palavraChave;
}
void Usuario::setIdade(int idade){
    this->idade = idade;
}
void Usuario::setSexo(char sx){
    sexo = sx;
}
void Usuario::print(){
    cout << "......................." << endl;
    cout << "nome:" << getNome() << endl;
    cout << "ocupacao:" << getOcupacao() << endl;
    cout << "email:" << getEmail() << endl;
    cout << "palavraChave:" << get_palavraChave() << endl;
    cout << "idade:" << getIdade() << endl;
    //cout << getSexo() << endl;
    cout << "......................." << endl;
}
