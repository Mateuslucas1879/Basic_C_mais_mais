#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main(){
    double salario1,salario2,salario3;
    string name1,name2,name3;
    int idade;
    char sexo;

    cout << "Nome ds primeira pessoa:";
    getline(cin, name1);
    cout << "Salario da primeira pessoa:";
    cin >> salario1;

    cout << "Nome da segunda pessoa pessoa:";
    cin.ignore(INT_MAX, '\n');
    getline(cin, name2);
    cout << "Salario da segunda pessoa:";
    cin >>salario2;

    cout << "Digite a idade: ";
    cin >> idade;
    cout << "Sexo[M][F]:";
    cin >> sexo;

    cout << fixed << setprecision(2);
    cout << "Nome 1: " << name1 <<endl;
    cout << "Salario 1 : " << salario1 <<endl;
    cout << "Nome 2: " << name2 <<endl;
    cout << "Salario2:" << salario2 <<endl;
    cout << "Idade:" << idade <<endl;
    cout << "Sexo: " <<sexo <<endl;

    return 0;
}
