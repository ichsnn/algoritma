#include <iostream>

int main() {

    //DEKLARASI
    int nomorbulan;

    //ALGORITMA
    std::cout<<"Masukkan nomor bulan : ";std::cin>>nomorbulan;
    switch (nomorbulan) {
        case 1: std::cout<<"Januari\n"; break;
        case 2: std::cout<<"Februari\n"; break;
        case 3: std::cout<<"Maret\n"; break;
        case 4: std::cout<<"April\n"; break;
        case 5: std::cout<<"Mei\n"; break;
        case 6: std::cout<<"Juni\n"; break;
        case 7: std::cout<<"Juli\n"; break;
        case 8: std::cout<<"Agurstus\n"; break;
        case 9: std::cout<<"Septermber\n"; break;
        case 10: std::cout<<"Oktober\n"; break;
        case 11: std::cout<<"November\n"; break;
        case 12: std::cout<<"Desember\n"; break;
        default: std::cout<<"Masukkan salah!\n"; break;
    }
    return 0;

}