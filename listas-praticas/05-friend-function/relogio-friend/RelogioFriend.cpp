#include "RelogioFriend.h"
#include <bits/stdc++.h>

using namespace std;
Relogio::Relogio(int hr = 0, int min = 0, int seg = 0){
    setHora(hr, min, seg);
}

void Relogio::setHora(int hr, int min, int seg){
    h = hr;
    m = min;
    s = seg;
}
   
void Relogio::printHora(){
    cout << h << ':' << m << ':' << s << endl;
}

//passando por referencia
void alteraHMS(Relogio &r){
    r.h = 10;
    r.m = 10;
    r.m = 10;
}