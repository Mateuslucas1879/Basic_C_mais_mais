#include <iostream>

using namespace std;

int main(){
    int x,y;
    string decrescente , crescente;
    cout<< "Digite dois numeros: " <<endl;
    cin >> x >>y;

    while ( x != y){
        if(x > y){
            cout<< "Decresente" << endl;
        } else if (y > x){
            cout << "Crescente" << endl;
        }
        cout << "Digite outro Numero: " << endl;
        cin >> x >> y;

    }

    return 0;

}