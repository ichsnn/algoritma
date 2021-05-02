#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    double jumlah;  //Jumlah deret
    int N;          //Penyebut pada suku terakhir N>0
    int i;          //Suku ke-i
    double k;          //Penyebut suku ke-i

    //ALGORITMA
    cin>>N;
    jumlah = 0;
    i = 1;
    k = 1;
    while(k<=N){
        if(i%2==1) {
            jumlah = jumlah + 1/k;
        } else jumlah = jumlah - 1/k;
        i+=1;
        k+=2;              
    }
    cout<<jumlah<<endl;

    return 0;

}