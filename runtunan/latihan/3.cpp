#include <iostream>

int main() {

    //DEKLARASI
    struct tahun {
        int tt;     //tahun
        int bb;     //bulan
        int hh;     //hari
    };
    tahun t1, t2, t3;
    int total_hari1, total_hari2, total_hari3;
    int sisa;

    //ALGORITMA
    std::cout<<"Masukkan tanggal pertama (tt:bb:hh) : ";
    std::cin>>t1.tt>>t1.bb>>t1.hh;                          //input tanggal pertama
    std::cout<<"Masukkan tanggal kedua (tt:bb:hh)   : ";
    std::cin>>t2.tt>>t2.bb>>t2.hh;                          //input tanggal kedua
    total_hari1 = (t1.tt * 365) + (t1.bb * 30) + t1.hh;     //total hari tanggal pertama
    total_hari2 = (t2.tt * 365) + (t2.bb * 30) + t2.hh;     //total hari tanggal kedua
    total_hari3 = total_hari2 - total_hari1;                //selisih kedua hari
    //hitung selisih berdasarkan tanggal bulan hari
    t3.tt = total_hari3 / 365;
    sisa  = total_hari3 % 365;
    t3.bb = sisa / 30;
    t3.hh = sisa % 30;
    std::cout<<"Jarak kedua hari                    : "
    <<t3.tt<<" tahun, "<<t3.bb<<" bulan, "<<t3.hh<<" hari\n";    //ouput selisih kedua tanggal

    return 0;
}