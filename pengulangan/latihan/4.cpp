#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int N, i, j;
    bool k;

    //ALGORITMA 
    cin>>N;
    for(i=1;i<=N;i++) {
        for(j=1;j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;
        if(i==N) {
            k = true;
        }
        while(k == true) {            
            for(i=1;i<=N;i++) {
                for(j=i;j<=N;j++) {
                    cout<<"*";
                }
                cout<<endl;
                if(i==N) {
                    k = false;
                }
            }
        }
    }

    return 0;
}