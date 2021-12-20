#include "Teste.h"
#include <bits/stdc++.h>

using namespace std;

//construtor
Teste::Teste(int value):x(value){}

//imprimindo x fazendo uso do this implicito e explicito
void Teste::print() const{
    
    //acessando de forma implicita o membro X com o ponteiro this
    cout << "x = " << x << endl;

    //acessando de forma explicita o membro X com o ponteiro this e seta
    cout << "this->x = " << this->x << endl;
}