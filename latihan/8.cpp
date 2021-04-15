#include <iostream>

int main(){
    
    //Deklarasi
    int tabungan;   //besar tabungan
    float bunga;    //besar bunga dalam 1 tahun
    int tabungan1;  //besar tabungan dalam setahun

    //Algoritma
    std::cin>>tabungan>>bunga;  //input tabungan dan nilai bunga
    bunga /= 100;               //konversi bunga ke dalam persen
    tabungan1 = tabungan+(tabungan*bunga); //menghitung tabungan satu tahun
    std::cout<<tabungan1;       //output tabungan setahun

    return 0;
}
