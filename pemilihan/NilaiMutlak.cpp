#include <iostream>

int main() {

    //DEKLARASI
    float x;

    //ALGORITMA
    std::cout<<"Masukkan bilangan : ";std::cin>>x;
    if(x<0) x = -x;
    std::cout<<x;

    return 0;

}