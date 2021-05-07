#include <iostream>
#include <string>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG DIGUNAKAN    
void HariSebelumnya(string hari, string *luaran);

main() {

    //DEKLARASI
    string namaHari;
    string namaHari1;

    //PROGRAM UTAMA
    cout<<"Hari : ";cin>>namaHari;
    HariSebelumnya(namaHari, &namaHari1);    
    cout<<"Hari sebelumnya adalah hari "<<namaHari1<<endl;
}

void HariSebelumnya(string hari, string *luaran) {

    //DEKLARASI
        //TIDAK ADA

    //ALGORITMA
    for(int i=0;i<=hari.length();i++) {
        hari[i] = tolower(hari[i]);
    }
    if(hari=="selasa") {
        *luaran = "Senin";
    } 
    if(hari=="rabu"){
        *luaran = "Selasa";
    } 
    if(hari=="kamis"){
        *luaran = "Rabu";
    } 
    if(hari=="jumat"){
        *luaran = "Kamis";
    } 
    if(hari=="sabtu"){
        *luaran = "Jumat";
    } 
    if(hari=="minggu"){
        *luaran = "Senin";
    } 
    if(hari=="senin"){
        *luaran = "Minggu";
    }
}