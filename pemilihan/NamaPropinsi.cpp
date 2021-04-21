#include <iostream>
#include <string.h>

using namespace std;

int main() {

    //DEKLARASI
    char ibk[10];    

    //ALGORITMA
    cout<<"Nama Ibukota di Pulau Jawa : ";
    cin>>ibk;
    for(int i=0; i <= 10; i++) {
        ibk[i] = tolower(ibk[i]);
    }
    if(strcmp(ibk, "serang")==0) {
        cout<<"Provinsi                   : Banten\n";
    } else if(strcmp(ibk, "jakarta")==0) {
        cout<<"Provinsi                   : DKI Jakarta\n";
    } else if(strcmp(ibk, "bandung")==0) {
        cout<<"Provinsi                   : Jawa Barat\n";
    } else if(strcmp(ibk, "semarang")==0) {
        cout<<"Provinsi                   : Jawa Tengah\n";
    } else if(strcmp(ibk, "yogyakarta")==0) {
        cout<<"Provinsi                   : DI Yogyakarta\n";
    } else if(strcmp(ibk, "surabaya")==0) {
        cout<<"Provinsi                   : Jawa Timur\n";
    }
    
    return 0;

}