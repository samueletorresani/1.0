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
    for (int k=0; k < esponente; k++){
        potenza*=base;
    }
    return potenza;
}