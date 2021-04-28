#include <iostream>

int main() {

    //DEKLARASI
    struct tanggal {
        int dd;         //hari
        int mm;         //bulan
        int yy;         //tahun
    };
    tanggal t;

    //ALGORITMA
    t.mm = 2;
    std::cout<<"Masukkan tanggal (hari) : ";
    std::cin>>t.dd;
    std::cout<<"Masukkan tahun          : ";
    std::cin>>t.yy;
    if(t.dd<28) t.dd++;
    else {
        if((t.yy%4==0 && t.yy%100!=0) || t.yy%400==0) {
            if(t.dd == 28) t.dd++;
            else { 
                t.dd=1;
                t.mm++;
            }
        } else {
            t.dd = 1;
            t.mm++;
        }
    }
    std::cout<<"\nTanggal Berikutnya di Bulan Februari ini adalah "<<t.dd<<"-"<<t.mm<<"-"<<t.yy<<"\n";

    return 0;
    
}