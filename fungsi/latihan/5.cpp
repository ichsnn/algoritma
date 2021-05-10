#include <iostream>
#include <string>

using namespace std;

string nextday(string hari);

main() {
    
    //DEKLARASI
    string hari;

    //ALGORITMA
    cout<<"Hari ?: ";cin>>hari;
    cout<<"Hari selanjutnya adalah "<<nextday(hari)<<endl;

}

string nextday(string hari) {

    //DEKLARASI
    int i;
    string day;

    //ALGORITMA
    for(i=0;i<hari.length();i++) {
        hari[i] = tolower(hari[i]);
    }

    if(hari == "senin") {
        day = "Selasa";
    }
    if(hari == "selasa") {
        day = "Rabu";
    }
    if(hari == "rabu") {
        day = "Kamis";
    }
    if(hari == "kamis") {
        day = "Jumat";
    }
    if(hari == "jumat") {
        day = "Sabtu";
    }
    if(hari == "sabtu") {
        day = "Minggu";
    }
    if(hari == "minggu") {
        day = "Senin";
    }

    return day;
        
}