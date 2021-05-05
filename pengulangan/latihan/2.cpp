#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int counter, N, i;

    //ALGORITMA
    cin>>N;
    counter = 0;
    for(i=1;i<=N;i++) {
        if(i%2==1) {
            counter++;
        }
    }
    cout<<"Banyak Bilangan Ganjil : "<<counter<<endl;

    return 0;

}