#include <iostream>

using namespace std;

const int Nmaks = 100;

typedef int LarikInt[Nmaks+1];

void BacaLarik(LarikInt A, int N);
void Asscending(LarikInt A, int N);
void CetakLarik(LarikInt A, int N);
int Range(LarikInt A, int N);

main() {
    //DEKLARASI
    LarikInt A;
    int N;
    int r;    
    //ALGORITMA
    cout<<"Banyak data ? ";cin>>N;
    BacaLarik(A, N);
    Asscending(A, N);
    CetakLarik(A, N);
    cout<<"Jangakuan = "<<Range(A, N)<<endl;
}

void BacaLarik(LarikInt A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"Masukkan larik A["<<i<<"] : ";cin>>A[i];
    }
}

void Asscending(LarikInt A, int N) {
    //DEKLARASI
    int i, j, temp;
    //ALGORITMA    
    for(i=1;i<=N;i++) {
        for(j=i;j<=N;j++) {
            if(A[j]<A[i]) {
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
}

void CetakLarik(LarikInt A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"A["<<i<<"] : "<<A[i]<<endl;
    }
}

int Range(LarikInt A, int N) {    
    return A[N] - A[1];
}