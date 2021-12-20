#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include <bits/stdc++.h>

using namespace std;

int main(){

    cout << "\n-----------------------------Parte 2-----------------------------------" << endl;

    //instanciando objeto commission
    BasePlusCommissionEmployee employee1("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
    cout << fixed << setprecision(2);

    //obtendo os dados do empregado comissionado
    cout << "Employee information obtained by get functions: " << endl;
    cout << "First name is: " << employee1.getFirstName() << endl;
    cout << "Last name is: " << employee1.getLastName() << endl;
    cout << "Social security number is: " << employee1.getSocialSecurityNumber() << endl;
    cout << "Gross sales is: " << employee1.getGrossSales() << endl;
    cout << "Commission rate is: " << employee1.getCommissionRate() << endl;
    cout << "Base salary is: " << employee1.getBaseSalary() << endl;

    //configurando o salario-base
    employee1.setBaseSalary(1000);
    cout << "\nUpdated employee information output by print function: \n" << endl;
    //exibindo os redimentos do empregado
    employee1.print();
    //exibindo os redimentos do empregado
    cout << "\nEmployee's earnings: $" << employee1.earnings() << endl;
}