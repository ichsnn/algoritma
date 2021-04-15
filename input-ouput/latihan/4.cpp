#include <iostream>

int main(){
    
    //Deklarasi
    int F;  //suhu dalam derajat farenheit
    int C;  //suhu dalam derajat celcius

    //Algoritma
    std::cout<<"Masukkan suhu ("<<char(248)<<"F) : ";
    std::cin>>F;
    C = 5.0/9 * (F-32);
    std::cout<<C<<char(248)<<"C\n";

    return 0;

}
