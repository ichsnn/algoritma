#include <iostream>

using namespace std;

double mutlak(double x);
double ganda(double x);
bool genap(int x);

main() {

    //DEKLARASI
    double x;

    //PROGRAM UTAMA
    cout<<"Masukkan x : ";cin>>x;    
    cout<<"Nilai |x| adalah "<<mutlak(x)<<endl;
    cout<<"Nilai 2 kali x adalah "<<ganda(x)<<endl;
    if(genap(x)) {
        cout<<"Nilai x adalah genap"<<endl;
    } else cout<<"Nilai x adalah ganjil"<<endl;

}

double mutlak(double x) {
    return x<0 ? -x : x;
}

double ganda(double x) {
    return 2*x;
}

bool genap(int x) {
    return x%2==0 ? true : false;
}