#include <iostream>

using namespace std;

const int Nmaks = 100;
typedef int LarikInt[Nmaks+1];

bool Kesamaan(LarikInt A, int N);

main() {
    //DEKLARASI
    LarikInt A = {'\0', 5, 5, 1, 5, 5};       
    //ALGORITMA    

    if(Kesamaan(A, 5)) {
        cout<<"Nilai elemen sama";
    } else cout<<"Nilai elemen berbeda";
}

bool Kesamaan(LarikInt A, int N) {
    //DEKLARASI
    int i, j, sama;
    //ALGORITMA    
    i = 1;
    sama = 1;
    while(i<=N && sama == 1) {
        for(j=i;j<=N;j++) {
            if(A[j] != A[i]) {
                sama = 0;                
            }
        }
        i++;
    }    
    return sama;
}