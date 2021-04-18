#include <iostream>

int main() {

    //DEKLARASI
    int tahun;

    //ALGORITMA
    std::cout<<"Tahun : ";
    std::cin>>tahun;
    if(((tahun%4==0)&&(tahun%100!=0))||(tahun%400==0)) std::cout<<"tahun kabisat\n";
    else std::cout<<"bukan tahun kabisat\n";

    return 0;

}