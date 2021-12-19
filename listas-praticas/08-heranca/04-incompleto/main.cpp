#include "header/Base.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;

    Derivada1 HPublica;
    x = HPublica.protegido;
    x = HPublica.privado;
    x = HPublica.publico;

    Derivada2 HPrivada;
    x = HPrivada.protegido;
    x = HPrivada.protegido;
    x = HPrivada.publico;

    Derivada3 HProtegida;
    x = HProtegida.protegido;
    x = HProtegida.privado;
    x = HProtegida.publico;
} 