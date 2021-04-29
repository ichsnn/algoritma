#include <iostream>

int main(){

    //Deklarasi
    struct Jam {
        int hh; //jam
        int mm; //menit
        int ss; //detik
    };
    Jam J;
    int TotalDetik;
    int Sisa;   //penampung untuk sisa pembagi
    
    //Algoritma
    std::cin>>TotalDetik;
    J.hh = TotalDetik / 3600;   //mendapatkan jam
    Sisa = TotalDetik % 3600;
    J.mm = Sisa / 60;           //mendapatkan menit
    J.ss = Sisa % 60;           //mendapatkan detik
    std::cout<<J.hh<<" jam "<<J.mm<<" menit "<<J.ss<<" detik\n";

    return 0;
}