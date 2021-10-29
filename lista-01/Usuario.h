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

    Usuario();
    Usuario(string nome, string ocupacao, string email, string palavraChave, int idade, char sx);
    //getter
    string getNome();
    string getEmail();
    string getOcupacao();
    string get_palavraChave();
    int getIdade();
    char getSexo();
    
    //setter
    void setNome(string nome);
    void setOcupacao(string ocupacao);
    void setEmail(string email);
    void set_palavraChave(string palavraChave);
    void setIdade(int idade);
    void setSexo(char sx);
    void print(int print);
};

#endif