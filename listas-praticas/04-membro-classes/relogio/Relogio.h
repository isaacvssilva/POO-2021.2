#ifndef RELOGIO_H
#define RELOGIO_H
#include <bits/stdc++.h>

using namespace std;

class Relogio{
private:
    int h, m, s;

public:
    Relogio(int, int , int);
    void setRelogio(int, int, int);
    void printRelogio();
};
#endif