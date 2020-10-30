#include <iostream>
using namespace std;
int pow(int base, int esponente);
int main(){
    int a,b;

    cout<<"base= ";
    cin>>a;
    cout<<"esponente= ";
    cin>>b;
    cout<<a<<"^"<<b<<"= "<<pow(a,b);  
}
int pow( int base, int esponente){
    int potenza=1;
    while (esponente!=0){
        potenza*= base;
        esponente--;  
    }
    return potenza;
}