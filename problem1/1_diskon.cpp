#include <iostream>

using namespace std;

//DEKLARASI GLOBAL
const int Nmaks = 100;
struct barang {
    int kodeBrg;
    double hargaBrg;
};
typedef barang LarikBarang[Nmaks+1];

//DEKLARASI PURWARUPA PROCEDURE YANG AKAN DIGUNAKAN
void listHarga(LarikBarang hargaJual, int N);
void turunkanHarga(LarikBarang &hargaJual, float p, int N);

//PROGRAM UTAMA
int main(int argc, char const *argv[])
{
    //DEKLARASI
    LarikBarang hargaJual_;
    int banyakData;    
    
    //ALGORITMA
    hargaJual_[1].hargaBrg = 50000;
    hargaJual_[1].kodeBrg = 24312; 
    hargaJual_[2].hargaBrg = 40000;
    hargaJual_[2].kodeBrg = 24313;
    hargaJual_[3].hargaBrg = 20000; 
    hargaJual_[3].kodeBrg = 24314;
    hargaJual_[4].hargaBrg = 30000;
    hargaJual_[4].kodeBrg = 24315;
    hargaJual_[5].hargaBrg = 35000;
    hargaJual_[5].kodeBrg = 24316;

    banyakData = 5;

    //Menmapilkan daftar harga
    cout<<endl;
    cout<<"Daftar Harga Barang Sebelum Diturunkan"<<endl;
    cout<<"----------------------------------------------"<<endl;
    listHarga(hargaJual_, banyakData);
    cout<<endl;
    cout<<"Daftar Harga Barang Setelah Diturunkan"<<endl;
    cout<<"----------------------------------------------"<<endl;
    //Menurunkan harga 5%;
    turunkanHarga(hargaJual_, 5, banyakData);
    listHarga(hargaJual_, banyakData);  //tampilkan setelah diturunkan

    return 0;
}

void listHarga(LarikBarang hargaJual, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA           
    cout<<"Kode Barang    Harga Barang"<<endl;
    for(i=1;i<=N;i++) {
        cout<<hargaJual[i].kodeBrg<<"          Rp."<<hargaJual[i].hargaBrg<<endl;
    }
}

void turunkanHarga(LarikBarang &hargaJual, float p, int N) {
    //DEKLARASI
    int i;
    float diskonHarga;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        diskonHarga = (p/100) * hargaJual[i].hargaBrg;
        hargaJual[i].hargaBrg -= diskonHarga;
    }
}
