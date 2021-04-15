#include <iostream>

int main(){
    
    //Deklarasi
    const float pi = 3.14;  //konstanta pi
    double r;               //jari-jari lingkaran dalam satuan cm
    double L;               //Luas lingkaran dalam satuan cm^2
    
    //Algoritma
    std::cin>>r;            //inputkan jari-jari lingkaran
    L = pi*r*r;             //hitung luas lingkaran
    std::cout<<L<<"\n";     //tampilkan luas lingkaran
    
    return 0;

}
