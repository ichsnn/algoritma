#include <iostream>

using namespace std;

void HitungRerata(int BanyakData, float *u);

main() {

    //DEKLARASI
    int N;
    float rerata;

    //PROGRAM UTAMA
    cout<<"Banyak Data : ";cin>>N;
    HitungRerata(N, &rerata);
    cout<<"Rata-rata = "<<rerata<<endl;
    if(rerata<50) {
        cout<<"Nilai rata-rata ujian tidak bagus"<<endl;
    } else cout<<"Nilai rata-rata ujian bagus"<<endl;

}

void HitungRerata(int BanyakData, float *u) {

    //DEKLARASI
    float x, jumlah;
    int k;

    //ALGORITMA
    jumlah = 0;
    for(k=1;k<=BanyakData;k++) {
        cout<<"Masukkan nilai ke-"<<k<<" : ";cin>>x;
        jumlah += x;        
    }
    *u = jumlah/BanyakData;
}