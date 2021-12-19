#include "CommissionEmployee.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    //instanciando objeto commission
    CommissionEmployee employee("Sue", "Jones", "222-22-2222", 10000, .06);
    cout << fixed << setprecision(2);

    //obtendo os dados do empregado comissionado
    cout << "Employee information obtained by get functions: " << endl;
    cout << "First name is: " << employee.getFirstName() << endl;
    cout << "Last name is: " << employee.getLastName() << endl;
    cout << "Social security number is: " << employee.getSocialSecurityNumber() << endl;
    cout << "Gross sales is: " << employee.getGrossSales() << endl;
    cout << "Commission rate is: " << employee.getCommissionRate() << endl;

    //configurando vendas brutas
    employee.setGrossSales(8000);
    //configurando a taxa de comissao
    employee.setCommissionRate(.1);

    cout << "\nUpdated employee information output by print function: \n" << endl;
    //exibindo as novas informacoes do emprego
    employee.print();

    //exibindo os redimentos do empregado
    cout << "\nEmployee's earnings: $" << employee.earnings() << endl;
}