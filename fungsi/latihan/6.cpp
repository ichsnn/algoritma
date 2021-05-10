#include <iostream>

using namespace std;

string lastday(string hari);

main() {

    //DEKLARASI
    string hari;

    //ALGORITMA
    cout<<"Hari ? ";cin>>hari;
    cout<<"Kemarin adalah hari "<<lastday(hari)<<endl;

}

string lastday(string hari) {
    
    //DEKLARASI
    int i;
    string day;

    //ALGORITMA
    for(i=0;i<=hari.length();i++) {
        hari[i] = tolower(hari[i]);
    }

    if(hari=="senin") {
        day = "Minggu";
    }
    if(hari=="selasa") {
        day = "Senin";
    }
    if(hari=="rabu") {
        day = "Selasa";
    }
    if(hari=="kamis") {
        day = "Rabu";
    }
    if(hari=="jumat") {
        day = "Kamis";
    }
    if(hari=="sabtu") {
        day = "Jumat";
    }
    if(hari=="minggu") {
        day = "Sabtu";
    }

    return day;
    
}