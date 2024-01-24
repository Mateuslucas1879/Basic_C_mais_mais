#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N ,I;
    cout  << "Quantos numeros vocee vai digitar: ";
    cin >> N ;
    double vet [N];

    for (I = 0; I < N;I++){
        cout << "Digite um numero: ";
        cin >> vet[I];

    }   

    cout << endl << "Numero Digitados: " << endl; 
    cout << fixed << setprecision(1);
    for(I =0 ; I<N;I++){
        cout << vet[I] << endl;
    }
    return 0;
}