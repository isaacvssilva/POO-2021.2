#include <bits/stdc++.h>
#include "Usuario.h"

using namespace std;

Usuario::Usuario(){}

Usuario::Usuario(string nome, string ocupacao, string email, string palavraChave, int idade, char sx){

    this->nome = nome;
    this->ocupacao = ocupacao;
    this->email = email;
    this->palavraChave = palavraChave;
    this->idade = idade;
    sexo = sx;
}

//getters
string Usuario::getNome(){
    return nome;
}
string Usuario::getOcupacao(){
    return ocupacao;
}
string Usuario::getEmail(){
    return email;
}
string Usuario::get_palavraChave(){
    return palavraChave;
}
int Usuario::getIdade(){
    return idade;
}
char Usuario::getSexo(){
    return sexo;
}
//setters
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

void Usuario::print(int print){

    if(print == 1){

        cout << "......................." << endl;
        cout << "nome:" << getNome() << endl;
        cout << "ocupacao:" << getOcupacao() << endl;
        cout << "email:" << getEmail() << endl;
        cout << "palavraChave:" << get_palavraChave() << endl;
        cout << "idade:" << getIdade() << endl;
        cout << "sexo:" << getSexo() << endl;
        cout << "......................." << endl;

    }else if(print == 2){

        cout << "......................." << endl;
        cout << "nome:" << getNome() << endl;
        cout << "ocupacao:" << getOcupacao() << endl;
        cout << "email:" << getEmail() << endl;
        cout << "palavraChave:" << get_palavraChave() << endl;
        cout << "idade:" << getIdade() << endl;
        cout << "sexo:" << getSexo() << endl;
        cout << "......................." << endl;

    }else if(print == 3){

        cout << "......................." << endl;
        cout << "nome:" << getNome() << endl;
        cout << "ocupacao:" << getOcupacao() << endl;
        cout << "email:" << getEmail() << endl;
        cout << "palavraChave:" << get_palavraChave() << endl;
        cout << "idade:" << getIdade() << endl;
        cout << "sexo:" << getSexo() << endl;
        cout << "......................." << endl;
    }
}
