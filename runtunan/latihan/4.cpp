#include <iostream>

int main() {

    //DEKLARASI
    int uang;           //input nilai uang (Rp)
    struct receh {
        int seribu;     //Rp. 1000
        int limaratus;  //Rp. 500
        int seratus;    //Rp. 100
        int limapuluh;  //Rp. 50
        int dualima;    //Rp. 25
    };
    receh tuker;    
    int sisa;           //penampung nilai sisa
    

    //ALGORTIMA
    std::cout<<"Masukkan nilai uang yang akan ditukar : Rp. ";
    std::cin>>uang;
    tuker.seribu = uang / 1000;
    sisa = uang % 1000;
    tuker.limaratus = sisa / 500;
    sisa = sisa % 500;
    tuker.seratus = sisa / 100;
    sisa = sisa % 100;
    tuker.limapuluh = sisa / 50;
    tuker.dualima = sisa % 25;
    std::cout<<"Hasil pertukaran\n";
    std::cout<<"Rp. 1000 = "<<tuker.seribu<<"\n";
    std::cout<<"Rp. 500  = "<<tuker.limaratus<<"\n";
    std::cout<<"Rp. 100  = "<<tuker.seratus<<"\n";
    std::cout<<"Rp. 50   = "<<tuker.limapuluh<<"\n";
    std::cout<<"Rp. 25   = "<<tuker.dualima<<"\n";

    return 0;

}