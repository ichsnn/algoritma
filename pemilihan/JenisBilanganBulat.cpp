#include <iostream>

int main() {

    //DEKLARASI
    int x;

    //ALGORITMA
    std::cout<<"Masukkan Bilangan : ";
    std::cin>>x;
    if(x>0) std::cout<<"positif";
    else if (x<0) std::cout<<"negatif";
    else std::cout<<"nol";

    return 0;

}