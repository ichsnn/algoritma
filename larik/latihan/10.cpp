#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef int LarikInt[Nmaks+1];

void BacaLarik(LarikInt A, int N);
void Asscending(LarikInt A, int N);
void CetakLarik(LarikInt A, int N);
void Median(LarikInt A, int N, float *M);

main() {
    //DEKLARASI
    LarikInt A;
    int N;
    float M;
    //ALGORITMA
    cout<<"Banyak data ? ";cin>>N;
    BacaLarik(A, N);
    Asscending(A, N);
    CetakLarik(A, N);
    Median(A, N, &M);
    cout<<"Median = "<<M<<endl;
}

void BacaLarik(LarikInt A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"Data A["<<i<<"] = ";cin>>A[i];
    }
}

void Asscending(LarikInt A, int N) {
    //DEKLARASI
    int i, j, temp;    
    //ALGORITMA
    for(i=1;i<=N;i++) {
        for(j=i;j<=N;j++) {
            if(A[i] > A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

void CetakLarik(LarikInt A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }
}

void Median(LarikInt A, int N, float *M) {
    //DEKLARASI
    int i, k;
    //ALGORITMA
    if(N%2==1) {
        k = (N-1)/2;    //Letak Median
        *M = A[k+1];    //Nilai Median
    } else if(N%2==0) {
        k = N/2;
        *M = (A[k] + A[k+1]) / 2.0;
    }        
}