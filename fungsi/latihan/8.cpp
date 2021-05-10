#include <iostream>

using namespace std;

string lower(string x);

main() {

    //DEKLARASI
    string x;

    //ALGORITMA
    cout<<"Kalimat : ";cin>>x;
    cout<<lower(x);

}

string lower(string x) {

    //DEKLARASI    
    int i;

    //ALGORITMA
    for(i=0;i<=x.length();i++) {
        x[i] = tolower(x[i]);
    }

    return x;

}