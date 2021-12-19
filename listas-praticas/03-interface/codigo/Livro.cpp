#include <bits/stdc++.h>
#include "Livro.h"

using namespace std;

Livro::Livro(string nome){
    setCursoNome(nome);
}
void Livro::setCursoNome(string nome){
    cursoNome = nome;
}
string Livro::getCursoNome(){
    return cursoNome;
}
void Livro::mensagem(){
    cout << "Bem vindo ao livro de notas\n" << getCursoNome() << "!" << endl;
}