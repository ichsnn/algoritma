#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int x;
    double harga;

    //ALGORITMA
    cin>>x;
    if(x>100000) harga = x - (0.05*x);   //Diskon misalkan 5% = 0.5
    else harga = x;
    cout<<harga;
    
    return 0;

}