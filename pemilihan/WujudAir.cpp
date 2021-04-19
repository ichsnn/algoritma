#include <iostream>

int main() {

    //DEKLARASI
    float T;    //Suhu air dalam derajat celcius

    //ALGORITMA
    std::cout<<"Masukkan suhu air ("<<char(248)<<"C) : " ;
    std::cin>>T;
    if(T<=0) std::cout<<"padat";
    else if( T>0 && T<100 ) std::cout<<"cair";
    else std::cout<<"gas atau uap";
    
    return 0;

}