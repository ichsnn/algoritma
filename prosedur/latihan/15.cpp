#include <iostream>

using namespace std;

void KPK(int a, int b);

main() {
    
    //DEKLARASI
    int x1, x2;

    //PROGRAM UTAMA
    cout<<"Masukkan bilangan pertama : ";cin>>x1;
    cout<<"Masukkan bilangan kedua   : ";cin>>x2;
    KPK(x1, x2);

}

void KPK(int a, int b) {
    //DEKLARASI
    int kpk_a;
    int kpk_b;

    //ALGORITMA
    kpk_a = a;
    kpk_b = b;
    while(kpk_a != kpk_b) {
        if(kpk_a>kpk_b) {
            kpk_b += b;
        } else kpk_a += a;
    }    

    cout<<kpk_a<<endl;
    cout<<kpk_b<<endl;
}