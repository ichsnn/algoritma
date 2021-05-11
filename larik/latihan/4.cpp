#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef int LarikInt[Nmaks+1];

void BacaLarik(LarikInt A, int N);
void Min(LarikInt A, int N, int *min);

main() {
    //DEKLARASI
    LarikInt A;
    int N;
    int min;
    //ALGORITMA
    cout<<"Banyak data ? ";cin>>N;
    BacaLarik(A, N);
    Min(A, N, &min);
    cout<<"Nilai terkecil dari larik tersebut adalah "<<min<<endl;
}

void BacaLarik(LarikInt A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"Masukkan larik A["<<i<<"] : ";cin>>A[i];
    }
}

void Min(LarikInt A, int N, int *min) {
    //DEKLARASI
    int i;
    //ALGORITMA
    *min = A[1];
    for(i=2;i<=N;i++) {
        if(A[i] < *min) {
            *min = A[i];
        }
    }
}