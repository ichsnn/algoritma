#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int x, y, z;
    int min;

    //ALGORITMA
    cin>>x>>y>>z;
    if(x>y && y>z) {
        min = z;        
        z = x;
        x = min;
        y = min;
    }    

    if(x>y) {
        min = y;
        y = x;
        x = min;
    }
    
    if(y>z) {
        min = z;
        z = y;
        y = min;
    }

    cout<<x<<" "<<y<<" "<<z<<"\n";
    return 0;

}