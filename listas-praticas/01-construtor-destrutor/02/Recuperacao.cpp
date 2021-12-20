#include "Recuperacao.h"
#include <bits/stdc++.h>

using namespace std;

Recuperacao::Recuperacao(){
    n++;
}
int Recuperacao::getRecuperacao(){
    return n;
}
Recuperacao::~Recuperacao(){
    n--;
}
int Recuperacao::n=0;