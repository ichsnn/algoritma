#include <iostream>
#include <string>

using namespace std;

int main() {

    //DEKLARASI
    const int harga_tiket = 300000;
    struct tgl{ int d; int m; int y; }; //tipe data bentukan tanggal
    int umur;           //umur penumpang    
    string tujuan;      //tujuan keberangkatan
    string nama;        //nama calon penumpang
    tgl lahir;          //tanggal lahir calon penumpang
    tgl berangkat;      //tanggal keberangkatan
    int harga;

    //DEKLARASI
    cout<<endl;
    cout<<"FORM INPUT PEMBELIAN TIKET PESAWAT\n"<<endl;    
    cout<<"Masukkan Nama              : ";getline(cin, nama);
    cout<<"Masukkan Tanggal Lahir     : ";cin>>lahir.d>>lahir.m>>lahir.y;
    fflush(stdin);    
    cout<<"Masukkan Kota Tujuan       : ";getline(cin, tujuan);    
    cout<<"Masukkan Tanggal Berangkat : ";cin>>berangkat.d>>berangkat.m>>berangkat.y;

    int total_hari1 = lahir.y*365 + lahir.m*30 + lahir.d;
    int total_hari2 = berangkat.y*365 + berangkat.m*30 + berangkat.d;
    int selisih = total_hari2 - total_hari1;

    umur = selisih / 365;  

    int diskon = 0;

    if(umur<=12) {
        diskon = harga_tiket*0.25;
        harga = harga_tiket - diskon;
    }

    cout<<"\n---------------------------------------------------------------"<<endl;
    cout<<"\nFORM OUTPUT PEMBELIAN TIKET\n"<<endl;
    cout<<"Nama          : "<<nama<<endl;
    cout<<"Umur          : "<<umur<<endl;
    cout<<"Kota Tujuan   : "<<tujuan<<endl;
    cout<<"Tgl Berangkat : "<<berangkat.d<<"-"<<berangkat.m<<"-"<<berangkat.y<<endl;    
    cout<<"Harga Tiket   : "<<harga_tiket<<endl;
    cout<<"Diskon        : "<<diskon<<endl;
    cout<<"Total         : "<<harga<<endl;

    return 0;

}