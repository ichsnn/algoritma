#include <iostream>

int main() {

    //DEKLARASI
    int NomorMenu;

    //Algoritma
    std::cout<<"Menu\n";
    std::cout<<"1. Baca Data\n";
    std::cout<<"2. Cetak Dara\n";
    std::cout<<"3. Ubah Data\n";
    std::cout<<"4. Hapus Data\n";
    std::cout<<"5. Keluar Program\n";
    std::cout<<"Masukkan Pilihan Menu (1 s/d 4) : ";std::cin>>NomorMenu;

    switch(NomorMenu) {
        case 1: std::cout<<"Anda memilih menu nomor 1"; break;
        case 2: std::cout<<"Anda memilih menu nomor 2"; break;
        case 3: std::cout<<"Anda memilih menu nomor 3"; break;
        case 4: std::cout<<"Anda memilih menu nomor 4"; break;
        case 5: std::cout<<"Anda memilih menu nomor 5"; break;
        default: std::cout<<"Masukkan salah!"; break;
    }
}