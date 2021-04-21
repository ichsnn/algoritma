#include <iostream>
#include <string>

int main() {

    //DEKLARASI
    const int JamNormal = 48;
    const int UpahLembur = 3000;

    std::string nama;
    char gol;
    int jjk;
    float lembur;
    int UpahPerjam;
    float UpahTotal;

    //ALGORITMA
    std::cout<<"Masukkan Nama     : ";getline(std::cin, nama);
    std::cout<<"Masukkan Golongan : ";std::cin>>gol;
    std::cout<<"Jumlah Jam Kerja  : ";std::cin>>jjk;

    gol = toupper(gol);

    switch(gol) {
        case 'A': UpahPerjam = 4000; break;
        case 'B': UpahPerjam = 5000; break;
        case 'C': UpahPerjam = 6000; break;
        case 'D': UpahPerjam = 7500; break;
    }

    if(jjk<=JamNormal) {
        UpahTotal = jjk*UpahPerjam;
    } else {
        lembur = jjk - JamNormal;
        UpahTotal = JamNormal*UpahPerjam + lembur*UpahLembur;
    }
    
    std::cout<<"Nama      : "<<nama<<"\n";
    std::cout<<"Golongan  : "<<gol<<"\n";
    std::cout<<"UpahTotal : "<<UpahTotal<<"\n";

    return 0;
    
}