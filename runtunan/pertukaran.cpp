#include <iostream>

int main(){

    //Deklarasi
    int A, B, C;

    //Algoritma

    //misalkan A diisi 8 dan b diisi 5
    A = 8;
    B = 5;

    std::cout<<A<<" "<<B<<"\n"; //cetak A dan B sebelum pertukaarn

    //Pertukaran
    C = A;  /*Tampung nilai A ke dalam C*/
    A = B;  /*Nilai B dapat dimasukkan ke dalam A*/
    B = C;  /*Nilai B diisi dengan nilai A yang tersimpan di C*/
    
    std::cout<<A<<" "<<B<<"\n"; //Cetak nilai A dan B

    return 0;
}