/*
    SUP che stampa senza sosta i multipli di due. Quindi 2, 4, 8, 16, eccetera. Il loop è innito. Cosa succede
    e perché?
*/

#include <iostream>
#include "powInt.hpp"
using namespace std;

int main(){
int a,exp; 
int powInt(int base, int exp);
    cout<< "premere 2 per stampare multipli di 2"<<endl;
    cin>> a;
    if (a==2){
        for(exp=1; exp<=exp; exp++)
        cout<<powInt(2,exp);
    }

}