#include <iostream>

int main() {

    //DEKLARASI
    char cc;
    int Nangka;
    int Nspasi;
    int Nlainnya;

    //ALGORITMA
    Nangka = 0;
    Nspasi = 0;
    Nlainnya = 0;    
    std::cin>>cc;
    while(cc!='.') {        
        switch(cc) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9': Nangka += 1; break;     
            case ' ': Nspasi += 1; break;
            default : Nlainnya += 1; break;                                    
        }                
        std::cin>>cc;        
    }

    std::cout<<"Jumlah Char Angka : "<<Nangka<<std::endl;
    std::cout<<"Jumlah Char Spasi : "<<Nspasi<<std::endl;
    std::cout<<"Jumlah Lainnya    : "<<Nlainnya<<std::endl;

    return 0;
    
}