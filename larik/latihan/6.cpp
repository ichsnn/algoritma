#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef char LarikChar[Nmaks+1];

void BacaLarik(LarikChar A, int N);
void Balik(LarikChar A, int N);
void CetakLarik(LarikChar A, int N);

main() {
    //DEKLARASI
    LarikChar A;
    int N;
    //ALGORITMA
    cout<<"Panjang larik ? ";cin>>N;
    BacaLarik(A, N);
    Balik(A, N);
    CetakLarik(A, N);
}

void BacaLarik(LarikChar A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    cout<<"Masukkan Kalimat"<<endl;
    for(i=1;i<=N;i++) {
        cin>>A[i];
    }
}

void Balik(LarikChar A, int N) {
    //DEKLARASI
    int i;
    char temp;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        temp = A[i];
        A[i] = A[N];
        A[N] = temp;
        N--;
    }
}

void CetakLarik(LarikChar A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<A[i];
    }
}