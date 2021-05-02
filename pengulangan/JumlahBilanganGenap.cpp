//Menghitung jumlah kemunculan bilangan genap

#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int x;
    int Nx;

    //ALGORITMA
    Nx = 0;
    cin>>x;
    while(x!=-1) {
        if(x % 2 == 0) {
            Nx += 1;
        }
        cin>>x;
    }
    cout<<Nx;

    return 0;

}