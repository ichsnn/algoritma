#include <iostream>

int main(){
    
    //Deklarasi
    float a; //alas (cm)
    float t; //tinggi (cm)
    float L; //luas segitiga (cm^2)

    //Algoritma
    std::cin>>a>>t;     //input panjang alas dan tinggi
    L = a*t/2;          //menghitung Luas segitiga
    std::cout<<L<<"\n"; //ouput Luas segitiga

    return 0;

}
