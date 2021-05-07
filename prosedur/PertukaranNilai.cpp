#include <iostream>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG DIGUNAKAN
void Tukar(int *a, int *b);

main() {

    //DEKLARASI
    int m, n;

    //PROGRAM UTAMA
    cout<<"m = ";cin>>m;
    cout<<"n = ";cin>>n;
    Tukar(&m, &n);
    cout<<"m = "<<m<<endl;
    cout<<"n = "<<n<<endl;

}

void Tukar(int *a, int *b) {

    //DEKLARASI
    int c;

    //ALGORITMA    
    c = *a;
    *a = *b;
    *b = c;
}