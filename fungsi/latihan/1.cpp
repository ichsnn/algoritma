#include <iostream>

using namespace std;

double mutlak(double x);

main() {

    //DEKLARASI
    double x;

    //PROGRAM UTAMA
    cout<<"Masukkan x : ";cin>>x;    
    cout<<"Nilai |x| adalah "<<mutlak(x);

}

double mutlak(double x) {
    return x<0 ? -x : x;
}