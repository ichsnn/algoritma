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
    struct satuan {
        string satu = "satu";
        string dua = "dua";
        string tiga = "tiga";
        string empat = "empat";
        string lima = "lima";
        string enam = "enam";
        string tujuh = "tujuh";
        string delapan = "delapan";
        string sembilan = "sembilan";  
        string sepuluh = "sepuluh";
        string sebelas = "sebelas";
        string belas = "belas";
        string puluh = "puluh";
        string seratus = "seratus";
        string ratus = "ratus";
        string ribu = "ribu";
        string seribu = "seribu";
    };   
    satuan angka;
    string luaran;    

    //ALGORITMA        
    if( bil == 1000) luaran += angka.seribu;    
    if(bil == 100) luaran += angka.seratus;
    if(bil == 11) luaran += angka.sebelas;
    if(bil == 10) luaran += angka.sepuluh;
    if(bil == 9) luaran += angka.sembilan;
    if(bil == 8) luaran += angka.delapan;
    if(bil == 7) luaran += angka.tujuh;
    if(bil == 6) luaran += angka.enam;
    if(bil == 5) luaran += angka.lima;
    if(bil == 4) luaran += angka.empat;
    if(bil == 3) luaran += angka.tiga;
    if(bil == 2) luaran += angka.dua;
    if(bil == 1) luaran += angka.satu;
    
    cout<<luaran;
}