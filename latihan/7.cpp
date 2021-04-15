#include <iostream>

int main(){
    
    //Deklarasi
    const float diskon = 0.05; //nilai diskon setiap barang 5%
    int harga;      //harga barang (Rp)
    int total;      //total harga setelah diskon

    //Algoritma
    std::cin>>harga;                    //input harga barang
    total = harga - (harga*diskon);     //mengitung harga barang setelah diskon
    std::cout<<total<<"\n";             //ouput harga barang setelah diskon

    return 0;

}
