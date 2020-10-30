#include <iostream>
#include "splitter.hpp"
using namespace std;

int main(){
    int number, index;
    cout<<"inserire numero di piu' cifre a piacimento "<<endl;
    cin>> number;
    cout<<"inserire posizione del numero da stampare "<<endl;
    cin>> index;

    cout << splitter(number, index);
}
            

