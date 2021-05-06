#include <iostream>
#include <cmath>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG DIGUNAKAN
void Fbunga(int A, float i, int n, double *F);

main() {

    //DEKLARASI
    int simpanan;   //Besar simpanan uang di bank (A)
    float bunga;      //Besar persen bunga tahunan (i)
    int tahun;      //Tahun simpanan (n)
    double total;      //Jumlah uang setelah n tahun (F)

    //PROGRAM UTAMA
    cout<<"Jumlah Simpanan pada Awal Tahun : ";cin>>simpanan;
    cout<<"Besar Bunga Tahunan             : ";cin>>bunga;
    cout<<"Lama Simpanan (Tahun)           : ";cin>>tahun;
    Fbunga(simpanan, bunga, tahun, &total);
    cout<<"Jumlah Uang setelah "<<tahun<<" adalah "<<int(total);

}

void Fbunga(int A, float i, int n, double *F) {

    //DEKLARASI
    int j;    

    //ALGORITMA
    *F = 0;
    for(j=1;j<=n;j++) {
        *F += A*pow(1+(i/100), j);          
    }    
}