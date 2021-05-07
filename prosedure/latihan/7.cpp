#include <iostream>
#include <string>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG DIGUNAKAN    
void HariSelanjutnya(string hari, string *luaran);

main() {

    //DEKLARASI
    string namaHari;
    string namaHari1;

    //PROGRAM UTAMA
    cout<<"Hari : ";cin>>namaHari;
    HariSelanjutnya(namaHari, &namaHari1);    
    cout<<"Hari selanjutnya adalah hari "<<namaHari1<<endl;
}

void HariSelanjutnya(string hari, string *luaran) {

    //DEKLARASI
    int p;      //peubah hari ke integer;

    //ALGORITMA
    for(int i=0;i<=hari.length();i++) {
        hari[i] = tolower(hari[i]);
    }
    if(hari=="senin") {
        *luaran = "Selasa";
    } else if(hari=="selasa"){
        *luaran = "Rabu";
    } else if(hari=="rabu"){
        *luaran = "Kamis";
    } else if(hari=="kamis"){
        *luaran = "Jumat";
    } else if(hari=="jumat"){
        *luaran = "Sabtu";
    } else if(hari=="sabtu"){
        *luaran = "Minggu";
    } else if(hari=="minggu"){
        *luaran = "Senin";
    }
}