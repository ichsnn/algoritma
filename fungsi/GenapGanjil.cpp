#include <iostream>

using namespace std;

bool Genap(int n);

main() {
    //DEKLARASI
    int x;

    cout<<"Masukkan bilangan bulat : ";cin>>x;
    if(Genap(x)) {
        cout<<"genap\n";
    } else cout<<"ganjil\n";

}

bool Genap(int n) {
    return n%2==0;
}