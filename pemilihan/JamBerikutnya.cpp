#include <iostream>

int main() {

    //DEKLARASI
    struct jam
    {
        int hh; //jam       {0..23}
        int mm; //menit     {0..59}
        int ss; //detik     {0..59}
    };
    jam j;

    //ALGORITMA
    std::cout<<"Jam     : ";std::cin>>j.hh>>j.mm>>j.ss;   

    if(j.ss + 1 < 60) {
        j.ss++;
    } else {
        j.ss = 0;
        if (j.mm + 1 < 60) {
            j.mm++;
        } else {
            j.mm = 0;
            if (j.hh + 1 < 24) {
                j.hh++;
            } else {
                j.hh = 0;
            }            
        }               
    }

    //cetak
    std::cout<<"\nJam Berikutnya : "<<j.hh<<" "<<j.mm<<" "<<j.ss<<"\n";

    return 0;
    
}