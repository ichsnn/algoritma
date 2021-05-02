#include <iostream>
#include <string>

using namespace std;

int main() {

    //DEKLARASI
    char cc;
    int Ncc;
    
    //ALGORITMA    
    cin>>cc;
    while(cc!='.'){
        Ncc += 1;
        cin>>cc;
    }
    cout<<"Jumlah karakter yang dimasukkan adalah "<<Ncc<<endl;

    return 0;
    
}