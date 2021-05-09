#include <iostream>

using namespace std;

//PURWARUPA FUNGSI
float F(float x);

main() {

    //DEKLARASI
    float x;

    //PROGRAM UTAMA
    cout<<"----------------------------------------------"<<endl;
    cout<<"   x                      f(x)                "<<endl;
    cout<<"----------------------------------------------"<<endl;
    x = 10.0;
    while(x<=15.0) {
        cout<<x<<"                 "<<F(x)<<endl;
        x = x+0.2;
    }
    cout<<"----------------------------------------------"<<endl;

}

float F(float x) {
    //DEKLARASI
        //TIDAK ADA
    
    //ALGORITMA
    return 2*x*x + 5*x - 8;
    
}