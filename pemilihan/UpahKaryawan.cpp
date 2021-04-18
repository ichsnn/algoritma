#include <iostream>
#include <string>

int main() {

    //DEKLARASI
    const int JamNormal = 48;
    const int UpahPerJam = 2000;
    const int UpahLembur = 3000;

    std::string nama;   //nama karyawan
    int jjk;            //jumlah jam kerja
    int lembur;         //jumlah jam lembur
    float upah;         //upah karyawan

    //ALGORITMA
    std::cout<<"Nama             : ";std::getline(std::cin,nama);
    std::cout<<"Jumlah Jam Kerja : ";std::cin>>jjk;
    if(jjk<=JamNormal) upah = jjk*UpahPerJam;
    else {
        lembur = jjk - JamNormal;
        upah = JamNormal * UpahPerJam + lembur * UpahLembur;
    }
    std::cout<<"\nUpah karyawan sebesar Rp. "<<upah<<"\n";    

    return 0;

}