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
    cc = getchar();
    while(cc!='.') {        
        switch(cc) {
            case '0': Nangka += 1; break;     
            case '1': Nangka += 1; break;     
            case '2': Nangka += 1; break;     
            case '3': Nangka += 1; break;     
            case '4': Nangka += 1; break;     
            case '5': Nangka += 1; break;     
            case '6': Nangka += 1; break;     
            case '7': Nangka += 1; break;     
            case '8': Nangka += 1; break;     
            case '9': Nangka += 1; break;     
            case ' ': Nspasi += 1; break;
            default : Nlainnya += 1; break;                                    
        }                
        cc = getchar();
    }

    std::cout<<"Jumlah Char Angka : "<<Nangka<<std::endl;
    std::cout<<"Jumlah Char Spasi : "<<Nspasi<<std::endl;
    std::cout<<"Jumlah Lainnya    : "<<Nlainnya<<std::endl;

    return 0;
    
}