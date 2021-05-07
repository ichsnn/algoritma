#include <iostream>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG DIGUNAKAN
void Terkecil(int *min);

int main() {

    //DEKLARASI
    int xterkecil;

    //PROGRAM UTAMA
    Terkecil(&xterkecil);
    cout<<"Nilai terkecil : "<<xterkecil<<endl;

}

void Terkecil(int *min) {
//pembacaan berakhir ketika x == 9999    

    //DEKLARASI
    int x;
    
    //ALGORITMA
    cout<<"Masukkan Nilai : ";cin>>x;
    *min = x;
    while(x!=9999) {
        cout<<"Masukkan Nilai : ";cin>>x;
        if(x<*min) {
            *min = x;
        }
    }
}