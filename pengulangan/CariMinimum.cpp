#include <iostream>

using namespace std;

int main() {

    //DEKLRASI
    int N;
    int i;
    int min;
    int x;

    //ALGORITMA
    cin>>N;
    cin>>x;
    min = x;
    for(i=2; i<=N; i++) {
        cin>>x;
        if(x < min) {
            min = x;
        }
    }
    cout<<min<<endl;

    return 0;

}