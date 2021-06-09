#include <iostream>

using namespace std;

//DEKLARASI GLOBAL
const Nmaks = 100;
struct barang {
    int kodeBrg;
    double hargaBrg;
};
typedef barang LarikBarang[Nmaks+1];

//DEKLARASI PURWARUPA PROCEDURE YANG AKAN DIGUNAKAN
procedure turunkanHarga(LarikBarang &hargaJual, float p, int N);

//PROGRAM UTAMA
int main(int argc, char const *argv[])
{
    //DEKLARASI
    LarikBarang hargaJual_;
    int banyakData;    
    
    //ALGORITMA
    hargaJual_[1].hargaBrg = 50000;
    hargaJual_[2].hargaBrg = 40000;
    hargaJual_[3].hargaBrg = 20000;            

    return 0;
}

procedure turunkanHarga(LarikBarang &hargaJual, float p, int N) {
    //DEKLARASI
    int i;
    float diskonHarga;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        diskonHarga = (p/100) * hargaJual[i].hargaBrg;
        hargaJual[i].hargaBrg -= diskonHarga;
    }
}
