#include <iostream>

int main(){

    //Deklarasi
    struct Jam  {
        int hh; //jam
        int mm; //menit
        int ss; //detik
    };
    Jam J1, J2, J3;
    int TotalDetik1, TotalDetik2, durasi;
    int sisa;   //peubah untuk menampung sisa pembagi

    //Algoritma

    std::cin>>J1.hh>>J1.mm>>J1.ss;  //jam pertama
    std::cin>>J2.hh>>J2.mm>>J2.ss;  //jam kedua

    //konversi masing-masing jam ke detik
    TotalDetik1 = (J1.hh*3600) + (J1.mm*60) + J1.ss;
    TotalDetik2 = (J2.hh*3600) + (J2.mm*60) + J2.ss;

    //hitung durasi dalam detik
    durasi = TotalDetik2 - TotalDetik1;
    //konversi durasi jam menit detik
    J3.hh = durasi / 3600;
    sisa = durasi  % 3600;
    J3.mm = sisa / 60;
    J3.ss = sisa % 60;
    std::cout<<J3.hh<<" jam "<<J3.mm<<" menit "<<J3.ss<<" detik\n";

    return 0;

}