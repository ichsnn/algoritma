#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int x;
    int sisa;

    //ALGORITMA
    cout<<"Masukkan nilai belanja : ";cin>>x;
    sisa = x%25;
    if(sisa!=0) {
        x = x - sisa;
    }
    cout<<"Nilai belanja menjadi  : "<<x<<"\n";
    return 0;

}