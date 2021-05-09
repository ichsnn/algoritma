#include <iostream>

using namespace std;

//DEKLARASI GLOBAL
typedef struct {
    float x;
    float y;
} Titik;

Titik TitikTengah(Titik P1, Titik P2);

main() {

    //DEKLARASI
    Titik P1, P2;
    Titik Pt;           //Titik tengah P1 dan P2

    //ALGORITMA
    cout<<"Titik P1"<<endl;
    cout<<"x    : ";cin>>P1.x;
    cout<<"y    : ";cin>>P1.y;
    cout<<endl;
    cout<<"Titik P2"<<endl;
    cout<<"x    : ";cin>>P2.x;
    cout<<"y    : ";cin>>P2.y;
    Pt = TitikTengah(P1, P2);
    cout<<endl;
    cout<<"Titik tengah : ("<<Pt.x<<", "<<Pt.y<<")"<<endl;

}

Titik TitikTengah(Titik P1, Titik P2) {
    //DEKLARASI
    Titik Pt;

    //ALGORITMA
    Pt.x = (P1.x + P2.x)/2;
    Pt.y = (P1.y + P2.y)/2;
    return Pt;
}