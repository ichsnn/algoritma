#include <iostream>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG AKAN DIGUNAKAN
void HitungLuasSegitga(float a, float t);

int main() {

    //DEKLARASI
    int i, N;
    float a, t;

    //PROGRAM UTAMA
    cout<<"Banyaknya segitiga : ";cin>>N;
    for(i=1;i<=N;i++) {
        cout<<"Segitiga yang ke-"<<i<<endl;
        cout<<"Alas   = ";cin>>a;
        cout<<"Tinggi = ";cin>>t;
        HitungLuasSegitga(a, t);
    }
}

void HitungLuasSegitga(float alas, float tinggi) {

    //DEKLARASI
    float L;

    //ALGORITMA
    L = (alas*tinggi)/2.0;          
    cout<<"Luas   = "<<L<<endl;
}