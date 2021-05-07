#include <iostream>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG DIGUNAKAN
void HitungLuasSegitiga(float alas, float tinggi, float *L);

main() {

    //DEKLARASI
    int i, N;
    float a, t, Luas;

    //PROGRAM UTAMA
    cout<<"Banyaknya segitiga : ";cin>>N;
    for(i=1;i<=N;i++) {
        cout<<"Segitiga ke-"<<i<<endl;
        cout<<"Alas   = ";cin>>a;
        cout<<"Tinggi = ";cin>>t;
        HitungLuasSegitiga(a, t, &Luas);
        cout<<"Luas   = "<<Luas<<endl;
    }
}

void HitungLuasSegitiga(float alas, float tinggi, float *L) {

    //DEKLARASI
        //tidak ada

    //ALGORITMA
    *L = (alas * tinggi)/2.0;
}