#ifndef RELOGIOCOMALARME_H
#define RELOGIOCOMALARME_H
#include "Relogio.h"
#include <bits/stdc++.h>

using namespace std;

class RelogioComAlarme{

private:
    bool ligado;
    Relogio alarme;
    string tom;

public:
    RelogioComAlarme();
    void setAlarme(string, bool, int, int, int);
    void printAlarme();

};
#endif