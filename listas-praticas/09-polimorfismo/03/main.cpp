#include <iostream>
#include <typeinfo>
#include <exception>
using namespace std;

class Base{
    virtual void f(){}
};

class Derivada : public Base{};

int main(){
    
    try{
        Base *a = new Base;
        Base *b = new Derivada;

        cout << "a é: " << typeid(a).name() << endl; 
        cout << "b é: " << typeid(b).name() << endl;
        cout << "*a é: " << typeid(*a).name() << endl;
        cout << "*b é: " << typeid(*b).name() << endl;   
    }catch(exception &e){
        cout << "Exceção: " << e.what() << endl;
    }
}