#include <iostream>
#include <typeinfo>
using namespace std;

int main(){

    int *a, b;
    a = 0;
    b = 0;
    if(typeid(a) != typeid(b)){
        cout << "a e b são de tipos diferentes:\n";
        cout << "a é: " << typeid(a).name() << '\n';
        cout << "b é: " << typeid(b).name() << '\n';
    }
    return 0;
}