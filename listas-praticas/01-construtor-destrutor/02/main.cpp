#include "Recuperacao.h"
#include <bits/stdc++.h>

using namespace std;

int main(){

    //criando objetos
    Recuperacao rec1, rec2, rec3;

    //get imprime n bjetos criados
    cout << rec1.getRecuperacao() << endl;

    //so ira ocorrer dentro deste bloco
    {
        //criando objetos
        Recuperacao rec4, rec5, rec6;
        //get imprime n bjetos criados
        cout << rec1.getRecuperacao() << endl;
    }

    cout << rec1.getRecuperacao() << endl;
}