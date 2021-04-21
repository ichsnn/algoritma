#include <iostream>

int main() {

    //DEKLARASI
    int angka;

    //ALGORITMA    
    std::cout<<"Masukkan Angka : ";std::cin>>angka;
    if(angka==1) {
        std::cout<<"satu\n";
    } else if(angka==2) {
        std::cout<<"dua\n";
    } else if(angka==3) {
        std::cout<<"tiga\n";
    } else if(angka==4) {
        std::cout<<"empat\n";
    } else {
        std::cout<<"angka yang dimasukkan harus 1 s/d 4\n";
    }

    return 0;

}