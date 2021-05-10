#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef int LarikInt[Nmaks+1];

void BacaLarik(LarikInt A, int N);
int CariNilai(LarikInt A, int N, int X);

main() {
    //DEKLARASI
    LarikInt A;
    int N;
    int X;
    int k;
    //ALGORITMA
    cout<<"Banyak data ? ";cin>>N;
    BacaLarik(A, N);
    cout<<"Cari nilai ? ";cin>>X;
    k = CariNilai(A, N, X);
    if(k!=0) {
        cout<<"Nilai "<<X<<" berada pada indeks ke-"<<k<<endl;
    } else cout<<"Nilai "<<X<<" tidak terdapat dalam larik"<<endl;
    
}

void BacaLarik(LarikInt A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"Masukkan larik A["<<i<<"] : ";cin>>A[i];
    }
}

int CariNilai(LarikInt A, int N, int X) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        if(A[i]==X) {
            return i;
        }
    }
    return 0;
}