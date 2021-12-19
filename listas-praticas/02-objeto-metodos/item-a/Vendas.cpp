#include "Vendas.h"
#include <bits/stdc++.h>

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
void Venda::totaliza(Venda v[], int n){
    valor = 0;
    pecas = 0;

    for(int i=0; i<n; i++){
        valor+=v[i].getValor();
        pecas+=v[i].getPecas();
    }
}