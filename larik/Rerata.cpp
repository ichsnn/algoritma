#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef int LarikInt[Nmaks+1];

void BacaLarik(LarikInt A, int N);
void CetakLarikVersil(LarikInt A, int N);
void HitungRerata(LarikInt A, int N, float *u);

main() {

    //DEKLARASI
    LarikInt A;     //Larik    
    int N;          //Jumlah elemen yang akan digunakan
    float u;        //Nilai rerata

    //ALGORITMA
    cout<<"Berapa jumlah data (N) ? ";cin>>N;
    cout<<endl;
    cout<<"Baca data:"<<endl;
    BacaLarik(A, N);
    cout<<endl;
    cout<<"Cetak data:"<<endl;
    CetakLarikVersil(A, N);
    cout<<endl;
    cout<<"Hitung rata-rata:"<<endl;
    HitungRerata(A, N, &u);
    cout<<"Rata-rata data = "<<u<<endl;

}

void BacaLarik(LarikInt A, int N) {
    //DEKLARASI
    int i;      //indeks larik
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"Masukkan nilai A["<<i<<"]: ";cin>>A[i];
    }
}

void CetakLarikVersil(LarikInt A, int N) {
    //DEKLARASI
    int i;      //indeks larik
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"Data ke-"<<i<<" : "<<A[i]<<endl;
    }
}

void HitungRerata(LarikInt A, int N, float *u) {
    //DEKLARASI
    float sum;  //penampung jumlah data
    int i;      //indeks larik
    //ALGORITMA
    sum = 0; //inisialiasi nilai jumlah data awal
    for(i=1;i<=N;i++) {
        sum += A[i];
    }
    *u = sum/N;
}