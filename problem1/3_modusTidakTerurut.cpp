#include <iostream>

using namespace std;

//DEKLARASI GLOBAL
const int Nmaks = 100;
typedef int larikInt[Nmaks+1];

void modus(larikInt A, int N, int &mo, int &frek);

int main(int argc, char const *argv[]) {
    //DEKLARASI    
    larikInt data;
    int nData;
    int mo1;
    int frek1;    
    int i;

    //ALGORITMA
    cout<<"Banyak data : ";cin>>nData;
    cout<<"Masukkan data angka : ";
    for(i=1;i<=nData;i++) {
        cin>>data[i];
    }
    modus(data, nData, mo1, frek1);
    cout<<"Modus     = "<<mo1<<endl;
    cout<<"Frekuensi = "<<frek1<<endl;

    return 0;
}

void modus(larikInt A, int N, int &mo, int &frek) {
    //DEKLARASI
    int i,j;
    bool masihSama;
    int KandidatMo, FrekKandidatMo;
    //ALGORITMA  
    frek = 0;      
    for(i=1;i<=N;i++) {
        FrekKandidatMo = 1;
        for(j=i+1;j<=N;j++) {
            if(A[i] == A[j]) {
                FrekKandidatMo++;
            }
        }      
        if(FrekKandidatMo >= frek) {
            frek = FrekKandidatMo;
        }        
    }
    for(i=1;i<=N;i++) {
        FrekKandidatMo = 1;
        for(j=i+1;j<=N;j++) {
            if(A[i] == A[j]) {
                FrekKandidatMo++;
            }
        }      
        if(FrekKandidatMo == frek) {
            mo = A[i];
        }        
    }
}
