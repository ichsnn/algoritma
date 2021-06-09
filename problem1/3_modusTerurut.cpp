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
    int i;
    bool masihSama;
    int KandidatMo, FrekKandidatMo;
    //ALGORITMA  
    frek = 0;  
    i = 1;
    while(i<=N) {
        KandidatMo = A[i];
        FrekKandidatMo = 1;
        i++;
        masihSama = true;
        while(masihSama && i<=N) {
            if(A[i] == KandidatMo) {
                FrekKandidatMo++;
                i++;
            } else masihSama = false;
        }
        if(FrekKandidatMo >= frek) {
            mo = KandidatMo;
            frek = FrekKandidatMo;
        }
    }
}
