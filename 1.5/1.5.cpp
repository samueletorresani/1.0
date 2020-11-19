/*
    SUP che legge un numero non-negativo e calcolarne il fattoriale. Fino a che numero si ottengono risultati
    corretti? Controllare che l'utente inserisca un numero adeguato e in caso contrario scrivere un messaggio
    e terminare l'esecuzione.
*/

#include <iostream>

using namespace std;

int main ()
{
    int n,i,fattoriale;
    
    cout << "Inserire un valore di n: ";
    cin >> n;
    
    fattoriale = 1;
    if(n>0){
        for (i=1; i<=n; i++)
        fattoriale = fattoriale * i;
    }
    else{
        cout<<"impossibile calcolare fattoriale di un numero negativo";
    }
        
    cout << "Il fattoriale di " << n << " e' " << fattoriale;
    
    return 0;
} 