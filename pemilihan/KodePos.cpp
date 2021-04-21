#include <iostream>
using namespace std;

int main() {

    //DEKLARASI
    string kota;

    //ALGORITMA
    cout<<"Nama Kota : ";
    cin>>kota;
    for(int i = 0; i<kota.size(); i++) {
        kota[i] = tolower(kota[i]);
    }
    if(kota == "padang") {
        cout<<"Kode POS  : 25000\n";
    } else if(kota == "bandung") {
        cout<<"Kode POS  : 40100\n";
    }else if(kota == "solo") {
        cout<<"Kode POS  : 51000\n";
    } else if(kota == "denpasar") {
        cout<<"Kode POS  : 72000\n";
    } else if(kota == "palu") {
        cout<<"Kode POS  : 92300\n";
    }
    return 0;
}