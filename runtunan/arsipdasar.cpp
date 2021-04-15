//PROGRAM MENGITUNG LUAS SEGIEMPAT
/*Membaca panjang dan lebar empat persegi panjang dari arsip*
"data.ext", menghitung luasnya, lalu mencetak luas tersebut
ke dalam arsip "data.txt". */

#include <iostream>
#include <fstream>

int main(){

    //DEKLARASI
    float panjang;      //panjang segiempat (cm)
    float lebar;        //lebar segiempat (cm)
    float luas;         //luas segiempat (cm^2)

    std::ifstream Fin;  //peubah arsip masukan
    std::ofstream Fout; //peubah arsip keluaran

    //ALGORITMA

    //buka arsip masukan
    Fin.open("data.txt");

    //buka arsip keluaran
    Fout.open("hasil.txt");

    //baca panjang dan lebar dari arsip Fin
    Fin>>panjang, lebar;

    luas = panjang*lebar;

    //tulis luas empat persegi ke arsip Fout
    Fout<<"Luas segiempat = "<<luas<<std::endl;

    //tutup arsip
    Fin.close();
    Fout.close();

    return 0;
    
}