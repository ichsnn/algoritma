#include <iostream>

using namespace std;

//DEKLARASI PURWARUPA PROSEDUR YANG DIGUNAKAN
void piramid(int N);

main() {

    //DEKLARASI
    int n;

    //PROGRAM UTAMA
    cout<<"Masukkan tinggi : ";cin>>n;
    piramid(n);
    
}

void piramid(int N){

    //DEKLARASI
    int i, j;
    int count, count1;
    int k;

    //ALGORITMA   
    count=0;
    count1=0;
    k=0; 
    for(i=1;i<=N;i++) {
        for(j=1;j<=N-i;j++) {
            cout<<"  ";
            count++;
        }
        while(k!=2*i-1) {
            if(count<=N-1) {
                cout<<i+k<<" ";
                count++;
            } else {
                count1++;
                cout<<i+k-2*count1<<" ";
            }
            k++;
        }
        count1=count=k=0;
        cout<<endl;       
    }
}

