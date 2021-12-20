#ifndef LIVRO_H
#define LIVRO_H

#include <bits/stdc++.h>
using namespace std;

class Livro{
private:
    string cursoNome;
public:
    Livro(string nome);
    void setCursoNome(string nome);
    string getCursoNome();
    void mensagem();
};

#endif