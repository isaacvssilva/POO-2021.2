#include <bits/stdc++.h>
#include "Vendas.h"

using namespace std;
void Venda::setValor(float preco){
    valor = preco;
}
void Venda::setPecas(int qtd){
    pecas = qtd;
}
int Venda::getPecas(){
    return pecas;
}
float Venda::getValor(){
    return valor;
}
Venda Venda::totaliza(Venda v[], int n){
    Venda temp;
    temp.valor = 0;
    temp.pecas = 0;
    for(int i=0; i<n; i++){
        temp.valor+=v[i].getValor();
        temp.pecas+=v[i].getPecas();
    }
    return temp;
}