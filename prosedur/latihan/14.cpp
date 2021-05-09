#include <iostream>

using namespace std;

void CetakSegitiga(int rows);

main() {

    //DEKLARASI
    int N;

    //PROGRAM UTAMA
    cin>>N;
    CetakSegitiga(N);
    
}

void CetakSegitiga(int rows) {

    //DEKLARASI
    int i, j, k, h;        

    h=(rows/2)+1;

    for(i=1;i<=h;i++) {
        for(j=h;j>=i;j--) {
            cout<<" ";
        }
        for(k=1;k<=i*2-1;k++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=h-1;i++) {
        for(j=1;j<=i+1;j++) {
            cout<<" ";
        }      
        for(k=h-1;k>=i*2-(h-1);k--) {
            cout<<"*";
        }
        cout<<endl;
    }
}