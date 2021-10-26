#ifndef USUARIO_H
#define USUARIO_H
#include <bits/stdc++.h>
using namespace std;

class Usuario{
 
private:
//atributos
    string nome,ocupacao, email, palavraChave;
    int idade;
    char sexo;

public:
    //getter
    string getNome();
    //setter
    void setNome(string nome);
    //getter
    string getOcupacao();
    //setter
    void setOcupacao(string ocupacao);
    //getter
    string getEmail();
    //setter
    void setEmail(string email);
    //getter
    string get_palavraChave();
    //setter
    void set_palavraChave(string palavraChave);
    //getter
    int getIdade();
    //setter
    void setIdade(int idade);
    //getter
    char getSexo();
    //setter
    void setSexo(char sexo);

    void print(int print);

};

#endif