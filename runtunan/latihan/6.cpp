#include <iostream>
#include <iomanip>

int main() {

    //DEKLARASI
    struct satuan {
        float inchi;  //25,44 mm =  / 1000
        float kaki;   //30,48 cm = / 100
        float yard;   //0,9144 m
    };
    satuan p;
    float panjang_benda;

    //ALGORITMA
    std::cout<<"Masukkan panjang benda (m) : ";
    std::cin>>panjang_benda;

    //1 inchi = 25.4 mm = 1/ 25.4
    //1 kaki = 30.38 cm = 1 /30,38
    //1 yard 0,9144 m = 1 / 0,9144
    p.inchi = panjang_benda * 1000 / 25.4;
    p.kaki = panjang_benda * 100 / 30.38;
    p.yard = panjang_benda / 0.9144;

    std::cout<<p.inchi<<" inchi, "<<p.kaki<<" kaki, "<<p.yard<<" yard.\n";
    return 0;
}