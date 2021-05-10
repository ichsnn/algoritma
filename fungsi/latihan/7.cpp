#include <iostream>

using namespace std;

string roman(int x);

main() {

    //DEKLARASI
    int x;

    //ALGORITMA
    cout<<"Masukkan angka 1 - 10 : ";cin>>x;
    cout<<"Angka romawi "<<x<<" adalah "<<roman(x)<<endl;

}

string roman(int x) {
    
    //DEKLARASI
    string rmw;
    
    //ALGORITMA
    switch(x) {
        case 1: rmw = "I"; break;
        case 2: rmw = "II"; break;
        case 3: rmw = "III"; break;
        case 4: rmw = "IV"; break;
        case 5: rmw = "V"; break;
        case 6: rmw = "VI"; break;
        case 7: rmw = "VII"; break;
        case 8: rmw = "VIII"; break;
        case 9: rmw = "IX"; break;
        case 10: rmw = "X"; break;
        default: rmw = "null";break;
    }

    return rmw;

}