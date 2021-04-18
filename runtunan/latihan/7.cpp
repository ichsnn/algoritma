#include <iostream>

int main() {
    
    //DEKLARASI
    int jumlah_penduduk;    //jumlah_kelahiran + jumlah_imigrasi - ( jumlah_kematian + jumlah_emigrasi )
    int jumlah_kelahiran;
    int jumlah_imigrasi;    //perpindahan penduduk ke dalam negara
    int jumlah_emigrasi;    //perpindahan penduuk ke negara lain
    int jumlah_kematian;

    //ALGORITMA
    //masukkan inputan
    std::cout<<"Masukkan jumlah kelahiran : ";
    std::cin>>jumlah_kelahiran;
    std::cout<<"Masukkan jumlah imigrasi  : ";
    std::cin>>jumlah_imigrasi;
    std::cout<<"Masukkan jumlah emigrasi  : ";
    std::cin>>jumlah_emigrasi;
    std::cout<<"Masukkan jumlah kematian  : ";
    std::cin>>jumlah_kematian;
    //hitung jumlah penduduk
    jumlah_penduduk = jumlah_kelahiran + jumlah_imigrasi - (jumlah_kematian - jumlah_emigrasi);
    //tampilkan hasil hitung jumlah penduduk
    std::cout<<"\nJumlah penduduk sebanyak "<<jumlah_penduduk;
    
    return 0;
}