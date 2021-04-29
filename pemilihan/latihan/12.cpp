#include <iostream>

using namespace std;

int main() {
    
    //DEKLARASI    
    int umur;
    string pesan;

    //ALGORITMA    
    cout<<"Masukkan umur : ";
    cin>>umur;

    if(umur>=0 && umur < 5) {
        pesan="balita";
    } else if(umur>=5 && umur<12) {
        pesan="anak-anak";
    } else if(umur>=12 && umur<20) {
        pesan="remaja";
    } else if(umur>=20 && umur<60) {
        pesan="dewasa";
    } else if(umur>=60) {
        pesan="tua";
    }
    cout<<pesan<<endl;

    return 0;    

}