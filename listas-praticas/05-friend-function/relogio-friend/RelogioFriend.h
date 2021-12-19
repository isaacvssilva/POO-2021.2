#ifndef RELOGIOFRIEND_H
#define RELOGIOFRIEND_H

#include <bits/stdc++.h>
using namespace std;

class Relogio{
    //declarando classe friend
    friend void alteraHMS(Relogio &r);

public:
    Relogio(int, int, int);
    void setHora(int, int, int);
    void printHora();

private:
    int h, m, s;
};
#endif