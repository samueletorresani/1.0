#include <iostream>
using namespace std;

#define N 10

int main(){
    int number[N];

    cout<< "insert " <<N<< "number "<<endl;
    for ( int i=0; i< N; i++){
        cin>> number [i];
    }
    int sum =0;
    for ( int i=0; i< N; i++){
         sum += number [i];
    }
cout<<"sum= "<<sum;

}