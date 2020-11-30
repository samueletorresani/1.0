#include <iostream>
#include <cmath>

using namespace std;

int a;
int main(){
    int base= 2; int exp= 1;
    cout<<"premere 2 per stampare i multipli di 2: "<<endl
    <<"ciclo INFINITO per fermare ctrl + C"<<endl;
    cin>>a;
    
    while (1){
        cout<< pow(base, exp)<<endl;
        exp++;
    }
    return 0;
}










/*
    SUP che stampa senza sosta i multipli di due. Quindi 2, 4, 8, 16, eccetera. Il loop è infnito. Cosa succede
    e perché?


#include <iostream>
#include "powInt.hpp"
using namespace std;

int main(){
int a;
int exp = 0;
int base = 2;
    cout << "premere 2 per stampare multipli di 2" << endl;
    cin >> a;
    if (a == 2) {
        while (exp >0) {
            
            exp++;
            powInt( base, exp);
            cout << powInt( base, exp);
        }
    }
    return 0;
}
*/