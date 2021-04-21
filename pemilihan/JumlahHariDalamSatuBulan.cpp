#include <iostream>
using namespace std;

int main() {

    //DEKLARASI
    int NomorBulan;
    int tahun;
    int JumlahHari;

    //ALGORITMA
    cout<<"Masukkan Nomor Bulan : ";
    cin>>NomorBulan;
    cout<<"Masukkan Tahun       : ";
    cin>>tahun;

    switch (NomorBulan) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: JumlahHari = 31; break;
        case 4:
        case 6:
        case 9:
        case 11: JumlahHari = 30; break;
        case 2: if((tahun%4 == 0 && tahun%100 != 0) || tahun%400 == 0) {
                    JumlahHari = 29;
                } else JumlahHari = 28; break;                

    }    
    
    cout<<"Jumlah hari dalam bulan "<<NomorBulan<<" tahun "<<tahun<<" adalah "<<JumlahHari<<endl;
}
