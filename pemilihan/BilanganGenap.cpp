#include <iostream>

int main() {

    //DEKLARASI
    int x;

    //ALGORITMA
    std::cout<<"Masukkan bilangan : ";std::cin>>x;
    if(x%2==0){
        std::cout<<"genap";
    } else std::cout<<"ganjil";

    return 0;
}