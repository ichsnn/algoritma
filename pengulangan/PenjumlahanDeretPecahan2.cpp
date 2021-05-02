#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    double jumlah;  //Jumlah Deret
    int N;          //Penyebut pada suku terakhir N>0
    double k;       //Penyebut suku ke i
    int tanda;      //Penanda suku positif atau negatif

    //ALGORITMA
    cin>>N;
    jumlah = 0;
    k = 1;
    tanda = +1;
    while(k<=N) {
        jumlah += tanda * (1/k);
        k+=2;
        tanda = -tanda;
    }
    cout<<jumlah<<endl;

    return 0;
    
}