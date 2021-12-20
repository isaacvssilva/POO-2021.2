#include <bits/stdc++.h>
using namespace std;

class NumeroTelefone{
//sobrecarrgando com funcoes friend

/*
sobrecarga implementada por meio de uma funcao friend que retorna
uma referencia a um objeto de entrada e recebe como parametro referencias
para um objeto istream e para um objeto da classe
*/
friend istream &operator >> (istream &, NumeroTelefone &);

/*sobrecarga implementada por meio de uma funcao friend que retorna
uma referencia a um objeto de saida e recebe como parametro referencias
para um objeto ostream e para objeto da classe
*/
friend ostream &operator << (ostream &, const NumeroTelefone &);

public:
//usando * para sobrecarga
void operator*(NumeroTelefone);
private:
    string DDD;
    string inicio;//linha de 4 algorismo
    string fim;//linha de 4 algorismo

};