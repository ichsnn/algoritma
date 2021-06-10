#include <iostream>

using namespace std;

//DEKLARASI GLOBAL
const int Nmaks = 100;
typedef int larikInt[Nmaks+1];

//PURWARUPA PROCEDURE YANG AKAN DIGUNAKAN
void hitungFrek(larikInt A1, int N, larikInt &countA1, int m);

//PROGRAM UTAMA
int main(int argc, char const *argv[]) {

    //DEKLARASI
    larikInt A = {0, 4, 2, 4, 3, 6, 3, 3, 2, 6, 3, 1, 1};
    larikInt countA;

    //ALGORITMA        
    hitungFrek(A, 12, countA, 6);
    for(int i=1;i<=12;i++) {
        cout<<A[i];
        if(i<12) {
            cout<<" ";
        }
    }    
    cout<<endl;
    for(int i=1;i<=12;i++) {
        cout<<countA[A[i]];
        if(i<12) {
            cout<<" ";
        }
    } 
    cout<<endl;    
    return 0;
}

//PROSEDURE
void hitungFrek(larikInt A1, int N, larikInt &countA1, int m) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=6;i++) {
        countA1[i] = 0;        
    }    
    for(i=1;i<=N;i++) {  
        countA1[A1[i]] = countA1[A1[i]] + 1;              
    }        
}