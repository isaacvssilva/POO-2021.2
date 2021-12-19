#include "Relogio.h"
#include <bits/stdc++.h>

using namespace std;

Relogio::Relogio(int hr = 0, int min = 0, int seg = 0){
    
    setRelogio(hr, min, seg);
}

void Relogio::setRelogio(int hr = 0, int min = 0, int seg = 0){
    h = hr;
    m = min;
    s = seg;
}

void Relogio::printRelogio(){
    cout << h << ':' << m << ':' << s << endl;
}