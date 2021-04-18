#include <iostream>

int main() {

    //DEKLARASI
    int a,b;

    //ALGORITMA
    std::cout<<"Masukkan bilangan 1 : ";std::cin>>a;
    std::cout<<"Masukkan bilangan 2 : ";std::cin>>b;
    if(a>b){
        std::cout<<"\nBilangan terbesar adalah "<<a;
    } else std::cout<<"\nBilangan terbesar adalah "<<b;
    
    return 0;

}