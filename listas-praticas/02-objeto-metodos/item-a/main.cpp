#include "Vendas.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    Venda total, v[5];

    v[0].setPecas(1);
    v[1].setPecas(2);
    v[2].setPecas(3);
    v[3].setPecas(4);
    v[4].setPecas(5);
    v[0].setValor(1.0);
    v[1].setValor(2.0);
    v[2].setValor(3.0);
    v[3].setValor(4.0);
    v[4].setValor(5.0);

    total.totaliza(v, 5);
    cout << total.getPecas() << endl << total.getValor() << endl;

}