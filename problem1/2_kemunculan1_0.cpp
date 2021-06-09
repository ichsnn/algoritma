#include <iostream>
#include <string>

using namespace std;

//DEKLARASI GLOBAL
const int Nmaks = 100;
typedef char larikKar[Nmaks+1];

void hitungJumlahKarakter0dan1(larikKar C, int N, int &m1, int &m2);

int main(int argc, char const *argv[]) {
    //DEKLARASI
    larikKar kar;  
    int panjangKar;  
    int jumKar0;
    int jumKar1;
    //ALGORITMA       
    jumKar0 = 0;
    jumKar1 = 0;   
    cout<<"Panjang Karakter      : ";cin>>panjangKar;
    fflush(stdin);
    cout<<"Masukkan Karakter 1/0 : ";cin.getline(kar, Nmaks);
    hitungJumlahKarakter0dan1(kar, panjangKar, jumKar0, jumKar1);
    cout<<"Jumlah kar 0 : "<<jumKar0<<endl;
    cout<<"Jumlah kar 1 : "<<jumKar1<<endl;
    cout<<kar<<endl;
    return 0;
}

void hitungJumlahKarakter0dan1(larikKar C, int N, int &m1, int &m2) {
    //DEKLARASI
    int i;
    //ALGORITMA    
    for(i=0;i<N;i++) {        
        if(C[i] == '0') {
            m1++;            
        } else
        if(C[i] == '1') {
            m2++;
        }
    }
}