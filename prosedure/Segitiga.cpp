#include <iostream>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG AKAN DIGUNAKAN
void HitungLuasSegitiga();

int main() {

    //DEKLARASI
    int i, N;

    //PROGRAM UTATMA
    cout<<"Banyaknya segitiga: ";cin>>N;
    for(i=1;i<=N;i++) {
        cout<<"Segitiga yang ke-"<<i<<endl;
        HitungLuasSegitiga();
    }

}

void HitungLuasSegitiga() {

    //DEKLARASI
    float alas;
    float tinggi;
    float Luas;

    //ALGORITMA
    cout<<"Masukkan alas   = ";cin>>alas;
    cout<<"Masukkan tinggi = ";cin>>tinggi;
    Luas = (alas*tinggi)/2.0;
    cout<<"Luas segitiga = "<<Luas<<endl;

}