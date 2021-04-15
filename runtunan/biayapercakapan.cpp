#include <iostream>

int main(){

    //Deklarasi
    const float BiayaPerDetik = 50;
    struct Jam {
        int jj; //jam
        int mm; //menit
        int ss; //detik
    };
    Jam J1;     //jam awal percakapan
    Jam J2;     //jam akhir percakapan
    Jam J3;     //lama percakapan
    int TotalDetik1, TotalDetik2;
    int sisa;   //penampung sisa pembagian
    int durasi;
    float biaya;

    //Algortima

    std::cin>>J1.jj>>J1.mm>>J1.ss;  //input waktu awal percakapan
    std::cin>>J2.jj>>J2.mm>>J2.ss;  //input waktu akhir percakapan

    //konversi ke total detik
    TotalDetik1 = (J1.jj*3600) + (J1.mm*60) + J1.ss;
    TotalDetik2 = (J2.jj*3600) + (J2.mm*60) + J2.ss;

    //hitung lama percakapan
    durasi = TotalDetik2 - TotalDetik1;

    //hitung biaya
    biaya = BiayaPerDetik * durasi;

    //koversi durasi ke jam menit detik
    J3.jj = durasi / 3600;
    sisa = durasi % 3600;
    J3.mm = sisa / 60;
    J3.ss = sisa % 60;

    std::cout<<J3.jj<<" jam "<<J3.mm<<" menit "<<J3.ss<<" detik\n"; //ouput durasi percakapan
    std::cout<<biaya<<"\n"; //output total biaya percakapan

    return 0;

}