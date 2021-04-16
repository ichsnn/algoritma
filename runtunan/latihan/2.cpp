#include <iostream>

int main() {

    //DEKLARASI
    struct tahun {
        int tt;     //tahun
        int bb;     //bulan
        int hh;     //hari
    };
    tahun t;
    int total_hari;
    int sisa;    

    //ALGORITMA
    std::cout<<"Masukkan total hari : ";
    std::cin>>total_hari;                   //input total hari
    t.tt = total_hari / 365;
    sisa = total_hari % 365;
    t.bb = sisa / 30;
    t.hh = sisa % 30;
    std::cout<<"Hasil konversi      : "<<t.tt<<" tahun, "<<t.bb<<" bulan, "<<t.hh<<" hari\n";    //ouput hasil konversi

    return 0;
}