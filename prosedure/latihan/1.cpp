#include <iostream>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG DIGUNAKAN
void JumlahGenap(int N, int *sum);

main() {
    
    //DEKLARASI
    int BanyakData;
    int jumlah;

    //PROGRAM UTAMA
    cout<<"Banyak Data : ";cin>>BanyakData;
    JumlahGenap(BanyakData, &jumlah);
    cout<<"Jumlah Bilangan Genap = "<<jumlah<<endl;

}

void JumlahGenap(int N, int *sum) {
    //DEKLARASI
    int i;

    //ALGORITMA
    *sum = 0;
    for(i=0;i<=N;i++) {      //Bilangan genap dimulai dari 0
        if(i%2==0) {
            *sum+=i;
        }
    }
    
}