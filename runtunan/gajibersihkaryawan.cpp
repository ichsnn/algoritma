#include <iostream>
#include <string>
#include <iomanip>

int main(){
    
    //Deklarasi
    const float PersenTunjangan = 0.2;
    const float PersenPajak = 0.15;
    std::string NamaKaryawan;
    float GajiPokok, tunjangan, pajak, gajibersih;

    //Algoritma
    std::cout<<"Masukkan Nama Karyawan : ";std::getline(std::cin, NamaKaryawan);
    std::cout<<"Masukkan Gaji Pokok    : ";std::cin>>GajiPokok;
    tunjangan = PersenTunjangan*GajiPokok;
    pajak = PersenPajak * (GajiPokok + tunjangan);
    gajibersih = GajiPokok + tunjangan - pajak;
    std::cout<<"Gaji Bersih "<<NamaKaryawan<<" adalah "<<std::fixed<<std::setprecision(2)<<gajibersih;
    

    return 0;

}