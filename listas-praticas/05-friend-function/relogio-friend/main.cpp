#include "RelogioFriend.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
    //criando objeto
    Relogio r(12, 0, 0); 
    r.printHora();
    //passando objeto como parametro
    alteraHMS(r);
    r.printHora();
}