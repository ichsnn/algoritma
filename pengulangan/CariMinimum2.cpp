#include <iostream>

using namespace std;

int main() {
    
    //DEKLARASI
    int x;
    int min;

    //ALGORITMA
    cin>>x;
    if(x == -1) {
        cout<<"Tidak ada data yang dimasukkan"<<endl;
    } else {
        min = x;
        while(x!=-1){
            if(x<min) {
                min = x;
            }
            cin>>x;
        }
    }
    cout<<min;

    return 0;
    
}