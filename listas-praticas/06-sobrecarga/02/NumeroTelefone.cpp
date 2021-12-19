#include "NumeroTelefone.h"
#include <bits/stdc++.h>

using namespace std;

istream &operator >> (istream &input, NumeroTelefone &numero){
    
    input.ignore();
    input >> setw(2) >> numero.DDD;
    input.ignore(2);
    input >> setw(4) >> numero.inicio;
    input.ignore();
    input >> setw(4) >> numero.fim;
    return input;
}

ostream &operator << (ostream &output, const NumeroTelefone &numero){
    output << "(" << numero.DDD << ")"
        << numero.inicio << "-" << numero.fim;
    return output;
}
//copia dos atributos
void NumeroTelefone::operator*(NumeroTelefone ladoDireito){
    DDD = ladoDireito.DDD;
    inicio = ladoDireito.inicio;
    fim = ladoDireito.fim;
}