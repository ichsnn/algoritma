#include <iostream>
#include <string>

using namespace std;

int main() {

    //DEKLARASI
    int N;
    int m;
    string nama;
    double nilai;
    double jumlah;
    double rerata;
    int i, j;
    
    //ALGORITMA
    cout<<"Banyak Siswa : ";cin>>N;
    cout<<"Jumlah Mapel : ";cin>>m;
    fflush(stdin);
    i = 1;
    while(i<=N) {
        cout<<"Nama Siswa "<<i<<" : ";getline(cin, nama);        
        j = 1;
        jumlah = 0;
        while(j<=m) {
            cout<<"Nilai MP "<<j<<"   : ";cin>>nilai;
            jumlah += nilai;
            j++;
        }
        rerata = jumlah/m;
        cout<<"Rata - Rata  : "<<rerata<<endl;
        fflush(stdin);
        i++;
    }
    return 0;    
}
