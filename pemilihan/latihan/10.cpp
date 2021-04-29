#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    string hari1;
    string hari2;
    int urutan1;
    int urutan2;
    int durasi;

    //ALGORITMA    
    cout<<"Masukkan Hari 1 : ";cin>>hari1;
    cout<<"Masukkan Hari 2 : ";cin>>hari2;
    
    
    if(hari1 == "Minggu") {
        urutan1 = 1; 
    } else if(hari1 == "Senin") {
        urutan1 = 2;
    } else if(hari1 == "Selasa") {
        urutan1 = 3;
    } else if(hari1 == "Rabu") {
        urutan1 = 4;
    } else if(hari1 == "Kamis") {
        urutan1 = 5;
    } else if(hari1 == "Jumat") {
        urutan1 = 6;
    } else if(hari1 == "Sabtu") {
        urutan1 = 7;
    }    
    
    if(hari2 == "Minggu") {
        urutan2 = 1; 
    } else if(hari2 == "Senin") {
        urutan2 = 2;
    } else if(hari2 == "Selasa") {
        urutan2 = 3;
    } else if(hari2 == "Rabu") {
        urutan2 = 4;
    } else if(hari2 == "Kamis") {
        urutan2 = 5;
    } else if(hari2 == "Jumat") {
        urutan2 = 6;
    } else if(hari2 == "Sabtu") {
        urutan2 = 7;
    }

    if(urutan2>=urutan1) {
        durasi = urutan2 - urutan1 + 1;
    } else {        //hari1>hari2
        if(urutan1 != 7) {
            durasi = 7 - urutan1 + urutan2 + 1;
        } else  {
            durasi = urutan2+1;
        }
    }

    cout<<"Durasi "<<durasi<<" hari\n";
    cout<<endl;

}