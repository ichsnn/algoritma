#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //DEKLARASI
    int i, N;       
    int counter;

    //ALGORITMA
    cin>>N;
    counter=0;
    for(i=2;i<=N;i++) {
        if(N%i==0) {
            counter++;
        }
    }    
    if(counter==1) {
        cout<<"Bilangan prima\n";
    } else cout<<"Bukan bilangan prima\n";

    return 0;
}