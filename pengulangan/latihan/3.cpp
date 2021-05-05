#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    int sum, i, N;

    //ALGORITMA
    sum = 0;
    cin>>N;
    for(i=1;i<=N;i++) {
        if(i%2==1) {
            sum += i;
        }
    }
    cout<<sum<<endl;

    return 0;
}