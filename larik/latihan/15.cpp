#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef int LarikInt[Nmaks+1];

void BacaLarik(LarikInt A, int N);
void CetakLarik(LarikInt A, int N);
void GeserSirkular(LarikInt A, int N);
main() {
    //DEKLARASI
    LarikInt A;
    int N;
    //ALGORITMA
    cout<<"Banyak data ? ";cin>>N;
    BacaLarik(A, N); 
    GeserSirkular(A, N);
    CetakLarik(A, N);

}

void BacaLarik(LarikInt A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1; i<=N; i++) {
        cout<<"Elemen ke-"<<i<<" : ";cin>>A[i];
    }
}

void CetakLarik(LarikInt A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"Elemen ke-"<<i<<" : "<<A[i]<<endl;
    }
}

void GeserSirkular(LarikInt A, int N) {
    //DEKLARASI
    int i, temp;        
    //ALGORITMA         
    temp = A[N];    
    for(i=N;i>=1;i--) {        
        A[i+1] = A[i];        
    }        
    A[1] = temp;
}