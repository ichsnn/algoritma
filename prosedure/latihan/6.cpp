#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

//DEKLARASI PURWARUPRA 
void JamSebelumnya(int *hh, int *mm, int *ss);

main() {

    //DEKLARASI
    struct jam{
        int hh;
        int mm;
        int ss;
    };
    jam j;
    //PROGRAM UTAMA
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Masukkan jam sekarang (hh:mm:ss): ";
    cin>>j.hh>>j.mm>>j.ss;    
    JamSebelumnya(&j.hh, &j.mm, &j.ss);    
    cout<<"Jam sebelumnya (hh:mm:ss)       :";
    cout<<j.hh<<":"<<j.mm<<":"<<j.ss;
    cout<<"-----------------------------------------------"<<endl;

}

void JamSebelumnya(int *hh, int *mm, int *ss) {
    //DEKLARASI
    int p;  //nilai p menit 
    int total_jam, total_p; //Peubah nilai total jam dan menit sebelumnya (s)
    int x;   //Jam sebelumnya
    int sisa; //peubah sisa pembagian

    //ALGORITMA
    cout<<"Berapa menit sebelumnya?        : ";cin>>p;    
    cout<<"-----------------------------------------------"<<endl;
    total_p = p * 60;    
    total_jam = ((*hh) * 3600) + ((*mm) * 60)+ (*ss);    
    x = total_jam - total_p;    
    *hh = x/3600;    
    sisa = x%3600;    
    *mm = sisa/60;     
    *ss = sisa%60;       
    
}