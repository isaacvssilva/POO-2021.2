#include "header/Base.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;

    Derivada1 HPublica;
    // x = HPublica.protegido;
    // x = HPublica.privado;
    x = HPublica.publico;
    cout << "funcionou!" << endl;

    // Derivada2 HPrivada;
    // x = HPrivada.protegido; ERRO: nao acessivel
    // x = HPrivada.protegido; ERRO: nao acessivel
    // x = HPrivada.publico; ERRO: nao acessivel

    // Derivada3 HProtegida;
    // x = HProtegida.protegido; ERRO: nao acessivel
    // x = HProtegida.privado; ERRO: nao acessivel
    // x = HProtegida.publico; ERRO: nao acessivel
} 