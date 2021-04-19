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
    int upahperjam;
    int upahtotal;

    //ALGORITMA
    std::cout<<"Nama             : ";std::getline(std::cin, nama);
    std::cout<<"Golongan         : ";std::cin>>gol;
    std::cout<<"Jumlah Jam Kerja : ";std::cin>>jjk;

    

    if(gol == 'A') upahperjam = 4000;
    else if(gol == 'B') upahperjam = 5000;
    else if(gol == 'C') upahperjam = 6000;
    else if(gol == 'D') upahperjam = 7000;

    if(jjk<=JamNormal) upahtotal = jjk*upahperjam;
    else {
        lembur = jjk - JamNormal;
        upahtotal = JamNormal*upahperjam + lembur*UpahLembur;
    }

    std::cout<<"Nama        : "<<nama<<"\n";
    std::cout<<"Golongan    : "<<gol<<"\n";
    std::cout<<"Upah        : "<<upahtotal<<"\n";

    return 0;

}