#include <iostream>
#include <iomanip>

int main() {

    //DEKLARASI
    struct satuan {
        float inchi;  //25,44 mm 
        float kaki;   //30,48 cm 
        float yard;   //0,9144 m
    };
    satuan p;
    float panjang_benda;

    //ALGORITMA
    std::cout<<"Masukkan panjang benda (m) : ";
    std::cin>>panjang_benda;
   
    p.inchi = panjang_benda * 1000 / 25.4;
    p.kaki = panjang_benda * 100 / 30.38;
    p.yard = panjang_benda / 0.9144;

    std::cout<<p.inchi<<" inchi, "<<p.kaki<<" kaki, "<<p.yard<<" yard.\n";
    return 0;
}