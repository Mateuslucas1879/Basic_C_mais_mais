#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a,b,j,k;

    cout<<"Quantas linhas vai ter sua matriz: ";
    cin >> a;
    cout<<"Quantas colunas vai ter a matriz: ";
    cin >> b;

    int mat[a][b];

    for(j = 0;j<b;j++){
        for(k=0;k<a;k++){
            cout <<"Elemento ["<< j << "," << k << "]: ";
            cin >> mat [j][k];
        }
    }
    cout << endl << "Matrix Digitada: " << endl;
    for(k=0;k<b;k++){
        for(j=0;j<b;j++){
            cout << mat [j][k] << " ";
        }
        cout << endl;
    }
    return 0;
}
