#include <iostream>
#include <cmath>

int main() {

    //DEKLARASI
    int NomorMenu;
    double panjang, lebar;
    double luas, keliling, diagonal;

    //ALGORITMA
    // {Cetak Menu}
    std::cout<<"MENU EMPAT PERSEGI PANJANG\n";
    std::cout<<"1. Hitung Luas\n";
    std::cout<<"2. Hitung Keliling\n";
    std::cout<<"3. Hitung Panjang Diagonal\n";
    std::cout<<"4. Keluar Program\n";
    std::cout<<"Masukan pilihan menu (1/2/3/4) : ";
    std::cin>>NomorMenu;

    switch (NomorMenu) {
        case 1: std::cin>>panjang>>lebar;
                luas = panjang*lebar;
                std::cout<<luas;
                break;
        case 2: std::cin>>panjang>>lebar;
                keliling = 2*panjang + 2*lebar;
                std::cout<<keliling;
                break;
        case 3: std::cin>>panjang>>lebar;
                diagonal = sqrt(panjang*panjang + lebar*lebar);
                std::cout<<diagonal;
                break;
        case 4: std::cout<<"Keluar Program!\n";
                break;
                        
    }

    return 0;

}