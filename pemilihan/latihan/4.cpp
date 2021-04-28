#include <iostream>

using namespace std;
int main() {

    //DEKLARASI
    int a, b, c;    //panjang sisi segitiga (a<=b<=c)

    //ALGORITMA
    cout<<"Masukkan a b dan c ( a<=b<=c ) : ";
    cin>>a>>b>>c;
    if(c*c==b*b+a*a) {
        cout<<"Segitiga Siku-Siku\n";                        
    } else if(c*c<b*b+a*a) {
        cout<<"Segitiga Lancip\n";
    } else if(c*c>b*b+a*a) {
        cout<<"Segitiga Tumpul\n";
    }

    return 0;
}