#include <iostream>
#include <string>

using namespace std;

int main() {

    //DEKLARASI
    const string password = "abc123";
    string katasandi;
    bool sah;
    int count;

    //ALGORITMA
    count = 1;
    sah = false;
    while((!sah) && (count<=3)) {
        cin>>katasandi;
        if(katasandi==password) {
            sah = true;
            cout<<"Password Benar";
        } else count++;
    }    
}
