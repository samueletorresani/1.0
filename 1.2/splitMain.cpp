/*
    SUP che dato un numero intero e un numero indice, individua la cifra alla posizione indice del primo
    numero inserito. Esempio: 39842, indice 2 (decine) = 4 decine. Farsi stampare solo la cifra, non serve il
    nome posizionale (decine, centinaia, ecc).
*/

#include <iostream>
#include "splitter.hpp"
using namespace std;

int main() {
    int number, index;
    cout << "inserire numero: ";
    cin >> number;
    cout << "inserire indice: " << endl;
    cin >> index;
    cout << splitter(number, index);
}