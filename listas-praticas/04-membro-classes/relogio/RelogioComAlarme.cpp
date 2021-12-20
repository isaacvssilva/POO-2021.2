#include "RelogioComAlarme.h"
#include <bits/stdc++.h>

using namespace std;

RelogioComAlarme::RelogioComAlarme() : alarme(10, 10, 10){
    ligado = false;
    tom = "Battery";
}

void RelogioComAlarme::setAlarme(string musica, bool flag, int h, int m, int s){
    ligado = flag;
    alarme.setRelogio(h, m, s);
    tom = musica;
}

void RelogioComAlarme::printAlarme(){
    alarme.printRelogio();
}