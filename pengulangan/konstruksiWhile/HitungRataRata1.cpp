//Menghitung rata-rata nilai ujian siswa yang dibaca dari papan ketik selama data yang dibaca tidak sama dengan -1
#include <iostream>

int main() {

    //DEKLARASI
    int x;              //Nilai ujian siswa yang dibaca
    int i;              //Pencacah banyaknya perulangan
    double sum;         //Pencatat jumlah total nilai ujian siswa
    double rerata;      //Rata-rata semua data

    //ALGORITMA
    sum=0;
    i = 0;
    std::cout<<"Nilai Siswa : ";std::cin>>x;
    while(x!=-1) {
        i = i+1;
        sum += x;
        std::cout<<"Nilai Siswa : ";std::cin>>x;
    }

    if(i!=0) {
        rerata = sum/i;
        std::cout<<"Nilai rata-rata semua data adalah "<<rerata<<"\n";
    } else std::cout<<"Tidak ada data nilai ujian yang dimasukkan\n";

    return 0;
    
}