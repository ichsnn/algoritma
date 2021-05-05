#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    const int sum = 25;    
    int x, y, z;    
    int counter;

    //ALGORITMA
    cout<<"Solusi Persamaan x + y + z = 25"<<endl;
    cout<<"x y z"<<endl;
    for(x=1;x<=sum;x++) {
        for(y=1;y<=sum;y++) {
            for(z=1;z<=sum;z++) {
                if(x + y + z == sum) {
                    cout<<x<<" "<<y<<" "<<z<<endl;
                }
            }            
        }        
    }

    return 0;
}