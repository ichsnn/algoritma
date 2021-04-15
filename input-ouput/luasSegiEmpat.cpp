#include <iostream>

int main(){
    
    //Deklarasi
    double p;        //panjang segiempat dalam cm
    double l;        //lebar segiempat dalam cm
    double Luas;     //luas segiempat dalam satuan cm(2)

    //Algoritma
    std::cin>>p>>l;  //Inputkan panjang dan lebar segiempat
    Luas = p*l;      //Hitung luas segiempat
    std::cout<<Luas<<"\n"; //Tampilkan luas segiempat

    return 0;
}
