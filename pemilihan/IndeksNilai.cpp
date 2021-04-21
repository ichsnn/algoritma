#include <iostream>
#include <string>

int main() {

    //DEKLARASI
    std::string nama;
    float nilai;
    char indeks;

    //ALGORITMA
    std::cout<<"Masukkan nama  : ";getline(std::cin, nama);
    std::cout<<"Masukkan nilai : ";std::cin>>nilai;

    //cari nilai indeks
    if(nilai>=80) indeks='A';
    else if(nilai>=70 && nilai<80) indeks='B';
    else if(nilai>=55 && nilai<70) indeks='C';
    else if(nilai>=40 && nilai<55) indeks='D';
    else if(nilai<40) indeks='E';

    std::cout<<"Nama   : "<<nama<<"\n";
    std::cout<<"Nilai  : "<<nilai<<"\n";
    std::cout<<"Indeks : "<<indeks<<"\n";

    return 0;

}