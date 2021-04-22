#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main() {

    //DEKLARASI
    struct jam {
        int hh;     //jam
        int mm;     //menit
        int ss;     //detik
    };
    jam j1;             //jam awal percakapan
    jam j2;             //jam akhir percakapan
    jam j3;             //lama percakapan
    char KodeWil[10];     //kode wilayah tujuan percakapan
    int durasi;         //lama percakapan dalam detik
    double PulsWil;     //lama pulsa, bergantung pada kodewilayah
    double TarifWil;    //tarif per pulsa
    double biaya;       //biaya percakapan
    
    //ALGORITMA
    cout<<"Waktu awal percakapan (j:m:d)  : ";
    cin>>j1.hh>>j1.mm>>j1.ss;
    cout<<"Waktu akhir percakapan (j:m:d) : ";
    cin>>j2.hh>>j2.mm>>j2.ss;
    cout<<"Kode wilayah                   : ";
    cin>>KodeWil;

    if(j2.ss >= j1.ss) j3.ss = j2.ss - j1.ss;
    else {j3.ss = (j2.ss+60) - j1.ss; j2.mm = j2.mm - 1;}
    if(j2.mm >= j1.mm) j3.mm = j2.mm - j1.mm;
    else {j3.mm = (j2.mm+60) - j1.mm; j2.hh = j2.hh -1;}
    if(j2.hh >= j1.hh) j3.hh = j2.hh - j1.hh;
    else j3.hh = (j2.hh+24) - j1.hh;


    durasi = j3.hh*3600 + j3.mm*60 + j3.ss;

    if(strcmp(KodeWil, "021") == 0) {
        PulsWil = 60;
        TarifWil = 150;
    } else if(strcmp(KodeWil, "0751") == 0) {
        PulsWil = 30;
        TarifWil = 250;
    } else if(strcmp(KodeWil, "0737") == 0) {
        PulsWil = 25;
        TarifWil = 375;
    } else if(strcmp(KodeWil, "0981") == 0) {
        PulsWil = 17;
        TarifWil = 510;
    }

    double pulsa = durasi / PulsWil;
    biaya = pulsa * TarifWil;

    cout<<"\nDurasi Percakapan              : "<<j3.hh<<":"<<j3.mm<<":"<<j3.ss<<"\n";
    cout<<"Total Durasi                   : "<<durasi<<" detik\n";
    cout<<"Biaya Percakapan               : Rp. "<<biaya<<"\n";

    return 0;
}