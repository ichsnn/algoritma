#include <iostream>

int main(){
    
    //Deklarasi
    std::string nama;
    std::string kota;

    //Algoritma
    std::cout<<"Halo, siapa namamu ? ";std::getline(std::cin, nama);
    std::cout<<"Di kota apa kamu sekarang ?";std::getline(std::cin, kota);
    std::cout<<"Senang bertemu denganmu, "<<nama<<", di kota "<<kota<<"\n";


    return 0;

}
