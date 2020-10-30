#include <iostream>
using namespace std;
int powInt(int base, int esponente);
int main(){
    int a,b;

    cout<<"base= ";
    cin>>a;
    cout<<"esponente= ";
    cin>>b;
    cout<<a<<"^"<<b<<"= "<<powInt(a,b);  
}
int powInt( int base, int esponente){
    int potenza=1;
    for (int k=0; k < esponente; k++){
        potenza*=base;
    }
    return potenza;
}