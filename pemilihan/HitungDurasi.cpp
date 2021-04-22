#include <iostream>
using namespace std;

int main() {

    //DEKLARASI
    struct jam {
        int hh;
        int mm;
        int ss;
    };
    jam j1, j2, j3;

    //ALGORITMA
    cout<<"Awal     : ";cin>>j1.hh>>j1.mm>>j1.ss;
    cout<<"Akhir    : ";cin>>j2.hh>>j2.mm>>j2.ss;

    if(j2.ss >= j1.ss) {
        j3.ss = j2.ss - j1.ss; 
    } else {
        j3.ss = (j2.ss+60) - j1.ss;
        j2.mm = j2.mm - 1;
    }    

    if(j2.mm >= j1.mm) {
        j3.mm = j2.mm - j1.mm; 
    } else {
        j3.mm = (j2.mm+60) - j1.mm;
        j2.hh = j2.hh - 1;
    }

    if(j2.hh >= j1.hh) {
        j3.hh = j2.hh - j1.hh;
    } else {
        j3.hh = (j2.hh + 24) - j1.hh;        
    }

    std::cout<<"\nDurasi (Akhir - Awal) : "<<j3.hh<<":"<<j3.mm<<":"<<j3.ss<<"\n";

    return 0;

}