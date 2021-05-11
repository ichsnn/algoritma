#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef int LarikInt[Nmaks+1];

void BacaLarik(LarikInt A, LarikInt B, int N);
void TukarLarik(LarikInt A, LarikInt B, int N);
void CetakLarik(LarikInt A, LarikInt B, int N);

main() {
    //DEKLARASI
    LarikInt A, B;
    int N;
    //ALGORITMA
    cout<<"Banyak data ? ";cin>>N;
    BacaLarik(A, B, N);
    TukarLarik(A, B, N);
    CetakLarik(A, B, N);    
}

void BacaLarik(LarikInt A, LarikInt B, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"Masukkan larik A["<<i<<"] : ";cin>>A[i];        
    }
    for(i=1;i<=N;i++) {        
        cout<<"Masukkan larik B["<<i<<"] : ";cin>>B[i];
    }
}

void TukarLarik(LarikInt A, LarikInt B, int N) {
    //DEKLARASI
    int i, temp;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        temp = B[i];
        B[i] = A[i];
        A[i] = temp;
    }
}

void CetakLarik(LarikInt A, LarikInt B, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"A["<<i<<"] : "<<A[i]<<endl;
    }    
    for(i=1;i<=N;i++) {
        cout<<"B["<<i<<"] : "<<B[i]<<endl;
    }
}