#include <iostream>

using namespace std;

//DEKLARASI PURWARUPA PROSEDUR YANG DIGUNAKAN
void piramid(int N);

main() {

    //DEKLARASI
    int n;

    //PROGRAM UTAMA
    cout<<"Masukkan tinggi : ";cin>>n;
    piramid(n);
    
}

void piramid(int N){

    //DEKLARASI
    int i, j;

    //ALGORITMA
    for(i=1;i<=N;i++) {
        for(j=i;j<=N;j++) {
            cout<<j;
        }
        cout<<endl;
    }
}