#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    char karakter;
    int i;
    int N;    

    //ALGORITMA A
    cin>>N;
    for (i=1; i<=N; i++) {        
        cin>>karakter;        
        cout<<karakter;
        cout<<endl;
    }

    //ALGORITMA 2;
    cin>>karakter;
    while(karakter!='.'){
        cout<<karakter<<endl;        
        cin>>karakter;
    }

    return 0;

    
}