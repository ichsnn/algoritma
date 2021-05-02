#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int n;
    int fak;
    int i;

    //ALGORITMA
    cin>>n;
    fak = 1;
    for(i=1; i<=n; i++) {
        fak *= i;
    }
    cout<<fak<<endl;

    return 0;

}