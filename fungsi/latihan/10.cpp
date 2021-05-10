#include <iostream>

using namespace std;

bool pythagoras(int a, int b, int c);

main() {

    //DEKLARASI
    int a, b, c;

    //ALGORITMA    
    cout<<"Masukkan sisi a : ";cin>>a;
    cout<<"Masukkan sisi b : ";cin>>b;
    cout<<"Masukkan sisi c : ";cin>>c;
    if(pythagoras(a, b, c)) {
        cout<<a<<", "<<b<<", dan "<<c<<" merupakan triple pythagoras"<<endl;
    } else cout<<a<<", "<<b<<", dan "<<c<<" bukan triple pythagoras"<<endl;

}

bool pythagoras(int a, int b, int c) {

    //DEKLARASI
    bool py = 0;
    //ALGORITMA
    if((c>a && c>b) && c*c == a*a + b*b) py = 1; 
    if ((a>c && a>b) && a*a == b*b + c*c) py = 1;       
    if ((b>a && b>c) && b*b == a*a + c*c) py = 1;

    return py;
    
}