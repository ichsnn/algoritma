#include <iostream>
#include <cmath>

using namespace std;

const int Nmaks = 100;
typedef double Data[Nmaks + 1];

void BacaData(Data X, int N);
double rerata(Data X, int N);
double simpanganBaku(Data X, int N);

main() {
    //DEKLARASI
    Data X;
    int N;
    double d;
    //ALGORITMA
    cout<<"Banyak Data ? ";cin>>N;
    BacaData(X, N);
    d = simpanganBaku(X, N);
    cout<<"Simpangan baku = "<<d<<endl;
}

void BacaData(Data X, int N) {
    //DEKLARASI
    int i;
    //ALGORITMA
    for(i=1;i<=N;i++) {
        cout<<"X["<<i<<"] = ";cin>>X[i];
    }    
}

double rerata(Data X, int N) {
    //DEKLARASI
    int i;
    int sum;
    //ALGORITMA
    sum = 0;
    for(i=1;i<=N;i++) {
        sum += X[i];
    }
    return  sum/N;
}

double simpanganBaku(Data X, int N) {
    //DEKLARASI
    int i;
    double E;
    //ALGORITMA
    E = 0;
    for(i=1;i<=N;i++) {
        E += pow(X[i] - rerata(X, N), 2);
    }
    return sqrt(E/(N-1));
    
}