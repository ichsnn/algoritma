#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int tb;
    int bb;
    int bb_ideal;

    //ALGORITMA
    cout<<"Tinggi Badan : ";cin>>tb;
    cout<<"Berat Badan  : ";cin>>bb;
    bb_ideal = (tb - 100) - (0.1 * (tb - 100));    
    if(bb==tb-2 || bb==tb+2) {
        cout<<"Ideal\n";
    } else cout<<"Tidak ideal\n";
    cout<<"berat badan ideal adalah "<<bb_ideal<<endl;

    return 0;

}