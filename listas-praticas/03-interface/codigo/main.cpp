#include <bits/stdc++.h>
#include "Livro.h"
using namespace std;

int main(){
    Livro Livro1("BCC221 - POO");
    Livro Livro2("BCC202 - AED's I");

    //Livro1.mensagem();
    cout << "Primeiro livro: " << endl;
    cout << Livro1.getCursoNome() << endl;
    //Livro2.mensagem();
    cout << "Segundo livro: " << endl;
    cout << Livro2.getCursoNome() << endl;
}