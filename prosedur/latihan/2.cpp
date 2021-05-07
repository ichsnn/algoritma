#include <iostream>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG DIGUNAKAN
void HitungRerata(float *u);

main() {


    //DEKLARASI
    float rerata;

    //PROGRAM UTAMA
    HitungRerata(&rerata);
    cout<<"Nilai rata rata = "<<rerata<<endl;

}

void HitungRerata(float *u){
//Ketika nilai yang dimasukkan = 9999, pembacaan berakhir

    //DEKLARASI
    int counter;
    float sum;
    float x;

    //ALGORITMA
    counter = 0;
    sum = x;
    cout<<"Masukkan nilai ke-1 : ";cin>>x;
    while(x!=9999) {
        sum += x;
        counter++;
        cout<<"Masukkan nilai ke-"<<counter+1<<" : ";cin>>x;
    }
    *u = sum/counter;
}