#include <iostream>
#include <string>

using namespace std;

//DEKALARASI PURWARUPA PROSEDURE   
void kata(int bil);

main() {

    //DEKLARASI
    int x;

    //PROGRAM UTAMA
    cout<<"Masukkan Bilangan Positif";cin>>x;
    kata(x);
}

void kata(int bil){

    //DEKLARASI
    string luaran;

    //ALGORITMA
    if(bil<0) {
        cout<<"Masukkan salah";
    } else {
        if(bil == 0) {
            string nol = "nol";
        }
        if(bil == 1) {
            string satu = "satu";
        }
        if(bil == 2) {
            string dua = "dua";
        }
        if(bil == 3) {
            string tiga = "dua";
        }
        if(bil == 4) {
            string empat = "dua";
        }
        if(bil == 5) {
            string lima = "dua";
        }
        if(bil == 6) {
            string enam = "dua";
        }
        if(bil == 7) {
            string tujuh = "dua";
        }
        if(bil == 8) {
            string delapan = "dua";
        }
        if(bil == 9) {
            string dua = "dua";
        }


    }
}