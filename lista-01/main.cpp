#include <bits/stdc++.h>
#include "Usuario.h"

using namespace std;

int main(){

    string nome, ocupacao, email, palavraChave;
    int idade;
    char sexo;

    Usuario *user1 = new Usuario();
    Usuario *user2 = new Usuario();
    Usuario *user3 = new Usuario();

    int aux1 = 0;

    cout << "inserir por ocupacao: " << endl;
    cout << "1- professor / 2- tecnico / 3- aluno" << endl;
    cin >> aux1;

    if(aux1 == 1){

        cout << "nome: ";
        cin >> nome;
        cout << "ocupacao: ";
        cin >> ocupacao;
        cout << "email: ";
        cin >> email;
        cout << "palavra chave: ";
        cin >> palavraChave;
        cout << "idade: ";
        cin >> idade;
        cout << "sexo: ";
        cin >> sexo;

        user1->setNome(nome);
        user1->setOcupacao(ocupacao);
        user1->setEmail(email);
        user1->set_palavraChave(palavraChave);
        user1->setIdade(idade);
        user1->setSexo(sexo);

    }else if(aux1 == 2){

        cout << "nome: ";
        cin >> nome;
        cout << "ocupacao: ";
        cin >> ocupacao;
        cout << "email: ";
        cin >> email;
        cout << "palavra chave: ";
        cin >> palavraChave;
        cout << "idade: ";
        cin >> idade;
        cout << "sexo: ";
        cin >> sexo;

        user2->setNome(nome);
        user2->setOcupacao(ocupacao);
        user2->setEmail(email);
        user2->set_palavraChave(palavraChave);
        user2->setIdade(idade);
        user2->setSexo(sexo);

    }else if(aux1 == 3){

        cout << "nome: ";
        cin >> nome;
        cout << "ocupacao: ";
        cin >> ocupacao;
        cout << "email: ";
        cin >> email;
        cout << "palavra chave: ";
        cin >> palavraChave;
        cout << "idade: ";
        cin >> idade;
        cout << "sexo: ";
        cin >> sexo;

        user3->setNome(nome);
        user3->setOcupacao(ocupacao);
        user3->setEmail(email);
        user3->set_palavraChave(palavraChave);
        user3->setIdade(idade);
        user3->setSexo(sexo);
    }

    cout << "......................." << endl;

    cout << "Exibir por ocupacao: " << endl;
    cout << "1- professor / 2- tecnico / 3- aluno" << endl;  
    
    int aux2 = 0;
    cin >> aux2;

    if(aux2 == 1){
        user1->print(1);
    }else if(aux2 == 2){
        user2->print(2);
    }else if(aux2 == 3){
        user3->print(3);
    }
}