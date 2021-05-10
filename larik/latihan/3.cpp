#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef int LarikInt[Nmaks+1];

void BacaLarik(LarikInt A, int N);
void _2Maks(LarikInt A, int N, int *max1, int *max2);

main() {
    //DEKLARASI
    LarikInt A;
    int N, max1, max2;
    //ALGORITMA
    cout<<"Banyak data ? ";cin>>N;
    BacaLarik(A, N);
    _2Maks(A, N, &max1, &max2);    
    cout<<"Nilai elemen terbesar pertama adalah "<<max1<<endl;
    cout<<"Nilai elemen terbesar kedua adalah "<<max2<<endl;

}

void BacaLarik(LarikInt A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"Masukkan larik A["<<i<<"] : ";cin>>A[i];
    }
}

void _2Maks(LarikInt A, int N, int *max1, int *max2) {
    //DEKLARASI
    int i, j, temp;
    //ALGORITMA                
    for(i=1;i<=N;i++) {        
        for(j=i;j<=N;j++) {
            if(A[j] < A[i]) {                
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }        
    }
    *max1 = A[N];
    *max2 = A[N-1];
}