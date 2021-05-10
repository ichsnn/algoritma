#include <iostream>

using namespace std;

string upper(string x);

main() {

    //DEKLARASI
    string x;

    //ALGORITMA
    cout<<"Kalimat : ";cin>>x;
    cout<<upper(x);

}

string upper(string x) {

    //DEKLARASI
    int i;

    //ALGORITMA
    for(i=0;i<=x.length();i++) {
        x[i] = toupper(x[i]);
    }

    return x;
}