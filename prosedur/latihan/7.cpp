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
        //TIDAK ADA

    //ALGORITMA
    for(int i=0;i<=hari.length();i++) {
        hari[i] = tolower(hari[i]);
    }
    if(hari=="senin") {
        *luaran = "Selasa";
    } 
    if(hari=="selasa"){
        *luaran = "Rabu";
    }
    if(hari=="rabu"){
        *luaran = "Kamis";
    }
    if(hari=="kamis"){
        *luaran = "Jumat";
    } 
    if(hari=="jumat"){
        *luaran = "Sabtu";
    } 
    if(hari=="sabtu"){
        *luaran = "Minggu";
    }
    if(hari=="minggu"){
        *luaran = "Senin";
    }
}