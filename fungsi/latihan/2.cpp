#include <iostream>
#include <cmath>

using namespace std;

typedef struct {
    float x;
    float y;
} Titik;

float jarakEuclidan(Titik P1, Titik P2);

main() {

    //DEKLARASI 
    Titik P1, P2;
    float d;

    //ALGORITMA
    cout<<"Titik 1"<<endl;
    cout<<"x : ";cin>>P1.x;
    cout<<"y : ";cin>>P1.y;
    cout<<endl;
    cout<<"Titik 2"<<endl;
    cout<<"x : ";cin>>P2.x;
    cout<<"y : ";cin>>P2.y;
    cout<<endl;
    d = jarakEuclidan(P1, P2);    
    cout<<"Jarak titik 1 dan titik 2 adalah "<<d<<" satuan"<<endl;

}

float jarakEuclidan(Titik P1, Titik P2) {

    //DEKLARASI
        //TIDAK ADA

    //ALGORITMA
    return sqrt(pow(P1.x - P2.x, 2) + pow(P1.y - P2.y, 2));  
      
}