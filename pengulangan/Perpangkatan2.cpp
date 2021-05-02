#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    double a;   //bilangan yang dipangkatkan
    int n;      //pemangkat
    double p;   //hasil pemangkatan    
    int i;      //pencacah pengulangan

    //ALGORITMA
    cin>>a>>n;
    p = 1;
    for(i=1;i<=abs(n);i++) {
        p *= a;
    }    
    if(n<0) {
        cout<<double(1/p)<<endl;
    } else cout<<p<<endl;

    return 0;
    
}