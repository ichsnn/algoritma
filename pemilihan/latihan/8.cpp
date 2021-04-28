#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int x;

    //ALGORITMA
    cin>>x;
    if(x<0) {
        x = 0;
    } else if(x>255) {
        x = 255;
    } 
    cout<<x<<endl;

    return 0;

}