#include <iostream>

using namespace std;

bool cek(char a);

main() {

    //DEKALRASI
    char a;

    //ALGORITMA
    cin>>a;
    if(cek(a)) {
        cout<<"true";
    } else cout<<"false";
    
}

bool cek(char a) {
    return a == 'a' ? 1 : 0;
}