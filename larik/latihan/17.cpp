#include <iostream>
#include <string>
using namespace std;

const int Nmaks = 100;
struct dataMahasiswa {
    string nama[Nmaks+1];
    int nim[Nmaks+1];
    float ipk[Nmaks+1];    
};

void bacaData(dataMahasiswa &data1, int banyak);
void cetakData(dataMahasiswa data1, int banyak);  //IPK > 2.0
int tertinggi(dataMahasiswa data1, int banyak);
int terendah(dataMahasiswa data1, int banyak);


main() {
    //DEKLARASI      
    dataMahasiswa data;  
    int N;
    //ALGORITMA    
    cout<<"Berapa banyak data mahasiswa yang akan dibuat ? : ";cin>>N;
    system("cls");
    bacaData(data, N);
    system("pause");     
    system("cls");
    cetakData(data, N);
    system("pause");
    system("cls");
    cout<<"Mahasiswa dengan IPK tertinggi : "<<endl;
    cout<<"Nama : "<<data.nama[tertinggi(data, N)]<<endl;
    cout<<"NIM  : "<<data.nim[tertinggi(data, N)]<<endl;
}

void bacaData(dataMahasiswa &data1, int banyak) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=banyak;i++) {        
        cout<<"Mahasiswa "<<i<<endl;
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Nama  : ";
        fflush(stdin);
        getline(cin, data1.nama[i]);        
        cout<<"NIM   : ";cin>>data1.nim[i];
        cout<<"IPK   : ";cin>>data1.ipk[i];
        cout<<endl;        
    }
}

void cetakData(dataMahasiswa data1, int banyak) {
    //DEKLARASI
    int i;
    int urutan;
    //ALGORITMA
    urutan = 1;
    cout<<"Mahasiswa IPK > 2.0"<<endl;
    cout<<"---------------------------------------"<<endl;
    for(i=1;i<=banyak;i++) {
        if(data1.ipk[i] > 2.0) {
            cout<<urutan<<". "<<data1.nim[i]<<" "<<data1.nama[i]<<endl;
            urutan++;
        }        
    }
}

int tertinggi(dataMahasiswa data1, int banyak) {
    //DEKLARASI
    int i;
    int j;
    int max=data1.ipk[1];    
    int iMax = 1;
    //ALGORITMA
    for(i=2;i<=banyak;i++) {
        if(data1.ipk[i] > max) {
            max = data1.ipk[i];
            iMax = i; 
        }
    }
    return iMax;
}