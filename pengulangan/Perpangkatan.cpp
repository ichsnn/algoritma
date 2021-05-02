#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    double a;   //nilai yang dipangkatkan
    int n;      //pemangkat
    double p;   //hasil perpangkatan
    int i;      //pencacah pengulangan


    //ALGORITMA
    cin>>a>>n;
    p = 1;
    for(i=1;i<=n;i++) {
        p *= a;
    }
    cout<<p<<endl;

    return 0;

}