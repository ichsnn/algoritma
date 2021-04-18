#include <iostream>

int main() {

    //DEKLARASI
    int x;

    //ALGORITMA
    std::cout<<"Masukkan bilangan : ";std::cin>>x;
    if(x%2==0){
        std::cout<<"Genap";
    } else {
        std::cout<<"Ganjil";
    }

    return 0;

}