#include <bits/stdc++.h>
#include "Usuario.h"

using namespace std;

int main(){

    string nome, ocupacao, email, palavraChave;
    int idade;
    char sexo;

    Usuario user1;

    cin >> nome;
    cin >> ocupacao;
    cin >> email;
    cin >> palavraChave;
    cin >> idade;
    //cin >> sexo;

    user1.setNome(nome);
    user1.setOcupacao(ocupacao);
    user1.setEmail(email);
    user1.setIdade(idade);
    user1.set_palavraChave(palavraChave);
    
    user1.print();

    Usuario user2;

    cin >> nome;
    cin >> ocupacao;
    cin >> email;
    cin >> palavraChave;
    cin >> idade;
    //cin >> sexo;

    user2.setNome(nome);
    user2.setOcupacao(ocupacao);
    user2.setEmail(email);
    user2.setIdade(idade);
    user2.set_palavraChave(palavraChave);
    
    user2.print();

    Usuario user3;

    cin >> nome;
    cin >> ocupacao;
    cin >> email;
    cin >> palavraChave;
    cin >> idade;
    //cin >> sexo;

    user3.setNome(nome);
    user3.setOcupacao(ocupacao);
    user3.setEmail(email);
    user3.setIdade(idade);
    user3.set_palavraChave(palavraChave);
    
    user3.print();
}