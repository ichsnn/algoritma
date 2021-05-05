#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //DEKLARASI
    int i, N;
    int sum;

    //ALGORITMA
    sum = 0;
    cin>>N;
    for(i = 0; i <= N; i++) {
        if (i<=1) {
            cout<<i;
            sum += i;
        }
        else {
            cout<<(i-1) + (i-2);
            sum += (i-1) + (i-2);
        }
        if(i<N) {
            cout<<" + ";
        }
    }
    cout<<" = "<<sum<<endl;
    return 0;

}