#ifndef BASE_H
#define BASE_H
#include <bits/stdc++.h>

using namespace std;

class Base{
protected:
    int protegido;

private:
    int privado;

public:
    int publico;
};

class Derivada1 : public Base{  
private:
    int a, b, c;

public:
    Derivada1(){
        a = protegido;
        //b = privado; // ERRO, nao acessivel
        c = publico;
    }
};

class Derivada2 : private Base{
private:
    int a, b, c;

public:
    Derivada2(){
        a = protegido;
        //b = privado; // ERRO, nao acessivel
        c = publico;
    }
};
class Derivada3 : protected Base{
private:
    int a, b, c;

public:
    Derivada3(){
        a = protegido;
        //b = privado; // ERRO, nao acessivel
        c = publico;
    }
};

#endif