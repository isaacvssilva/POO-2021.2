#include <iostream>

using namespace std;

float divide(float a, float b){
	
	if(b == 0){
		throw 1;
	}
	return a/b;
}

int main(){

	int a, b, c;
	bool errorr = false;

	cout << "Digite o valor do Numerador:";
	cin >> a;

	cout << "Digite o valordo Denominador:";
	cin >> b;
	
	do{
		try{			
			cout << "Valor da Divisao a/b:" << divide(a,b) << endl;
			errorr  = false;				
		}catch(int erro){
			if(erro == 1){
				cout << "Erro de divisao por zero!!!!" << endl;
				cout << "Digite um novo valor para o Denominador diferente de zero:";
				cin >> b;
			}
			errorr  = true;		
		}	
	}while(errorr);
	cout << endl;
	return 0;
}
