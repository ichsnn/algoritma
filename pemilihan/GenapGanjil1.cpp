#include <iostream>

int main() {

    //DEKLARASI
    int x;

    //ALGORITMA
    std::cout<<"Masukkan Angka : ";std::cin>>x;
    switch (x%2)
    {
    case 1:
        std::cout<<"ganjil";
        break;
    
    case 0:
        std::cout<<"genap";
        break;
    }

    return 0;
    
}