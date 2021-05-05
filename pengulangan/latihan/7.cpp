#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int saldo;
    int kode;
    int setor, tarik;

    //ALGORITMA
    cout<<"Masukkan saldo awal : ";cin>>saldo;
    cout<<endl;
    while(saldo>10000) {
        cout<<"Total Saldo Anda "<<saldo<<"\n";
        cout<<"Kode Transaksi : \n";
        cout<<"0 = Setor\n";
        cout<<"1 = Tarik\n";
        cout<<endl;
        cout<<"Masukkan Kode : ";cin>>kode;
        switch(kode) {
            case 0: cout<<"Masukkan jumlah saldo yang akan disetor : ";cin>>setor;
                    saldo += setor;
                    break;
            case 1: cout<<"Masukkan jumlah saldo yang akan ditarik : ";cin>>tarik;
                    saldo -= tarik;
                    break;
        }
        
    }

    cout<<"Saldo anda telah mencapai minimun!"<<endl;

    return  0;

}