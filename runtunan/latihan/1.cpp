#include <iostream>

int main() {

    //Deklarasi
    struct hari {
        int hh;     //hari
        int jj;     //jam        
        int mm;     //menit        
        int ss;     //detik
    };
    hari H;
    int total_detik;
    int sisa;

    //Algoritma
    std::cout<<"Masukkan Total Detik : ";
    std::cin>>total_detik;                  //input total detik
    H.hh = total_detik / (3600 * 24);
    sisa = total_detik % (3600 * 24);
    H.jj = sisa / 3600;
    sisa = sisa % 3600;
    H.mm = sisa / 60;
    H.ss = sisa % 60;
    std::cout<<"Hasil konversi       : "<<H.hh<<" hari, "<<H.jj<<" jam, "<<H.mm<<" menit, "<<H.ss<<" detik\n";

    return 0;
}