#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef int LarikInt[Nmaks + 1];

void BacaLarik(LarikInt A, int N);
void CetakLarik(LarikInt A, int N);
void Modus(LarikInt A, int N);

main() {
    //DEKLARASI
    LarikInt A;
    int N;
    //ALGORITMA
    cout<<"Banyak Data ? : ";cin>>N;
    BacaLarik(A, N);
    Modus(A, N);
}

void BacaLarik(LarikInt A, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) { 
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

void Modus(LarikInt A, int N) {
    //DEKLARASI
    int i, j;        
    int count;
    int max_count = 0;    
    //ALGORITMA            
    for(i=1;i<=N;i++) {
        count = 1;
        for(j=i+1;j<=N;j++) {                        
            if(A[i] == A[j]) {
                count++;
            }
        }        
        if(count > max_count) {
            max_count = count;
        }
    }      
    for(i=1;i<=N;i++) {
        count = 1;
        for(j=i+1;j<=N;j++) {                        
            if(A[i] == A[j]) {
                count++;
            }
        }  
        if(count == max_count) {
            cout<<A[i]<<endl;
        }
    }
}