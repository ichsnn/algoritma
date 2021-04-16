#include <iostream>

int main() {

    //DEKLARASI
    struct jarak {
        int km;     //kilometer
        int m;      //meter
        int cm;     //sentimeter
    };
    jarak j;
    int jarak_tempuh;   //dalam cm
    int sisa;

    //ALGORITMA
    std::cout<<"Masukkan jarak tempuh semut (cm) : ";
    std::cin>>jarak_tempuh;
    //konversi
    j.km = jarak_tempuh / (1000*100);
    sisa = jarak_tempuh % (1000*100);
    j.m = sisa / 100;
    j.cm = sisa % 100;
    std::cout<<"Jarak yang ditempuh semut "<<j.km<<" km, "<<j.m<<" m, "<<j.cm<<" cm.\n";

    return 0;

}