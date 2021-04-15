#include <iostream>

int main(){

    //Deklarasi
    struct jam
    {
        int hh; //jam
        int mm; //menit
        int ss; //detik
    };
    jam J;
    int total_detik;
    
    //Algoritma
    std::cin>>J.hh>>J.mm>>J.ss;
    total_detik = (J.hh*3600) + (J.mm*60) + J.ss;
    std::cout<<total_detik<<"\n";

    return 0;

}