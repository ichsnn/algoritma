#include <iostream>

int main(){

    //Menghitung Luas Segitiga

    //Deklarasi
    double a;       //alas segitiga dalam cm
    double t;       //tinggi segitiga dalam cm
    double L;       //luas segitiga dalam cm^2

    //Algoritma
    std::cout<<"Masukkan alas dan tinggi segitiga : ";std::cin>>a>>t;  //menginputkan alas dan tinggi segitiga
    L = (a*t)/2;            //menghitung luas segitiga
    std::cout<<L<<"\n";     //menampilkan luas segitiga;

    return 0;

}
