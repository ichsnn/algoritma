#include <iostream>

int main() {

    //DEKLARSI
    int angka;

    //ALGORITMA
    std::cout<<"Masukkan Angka : ";std::cin>>angka;
    switch (angka){
    case 1: std::cout<<"satu\n";
        break;
    case 2: std::cout<<"dua\n";
        break;
    case 3: std::cout<<"tiga\n";
        break;
    case 4: std::cout<<"empat\n";
        break;    
    default:
        std::cout<<"angka yang dimasukkan harus 1 s/d 4\n";
        break;
    }
}