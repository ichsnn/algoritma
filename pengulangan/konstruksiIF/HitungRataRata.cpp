//Menghitung rata-rata N buah data bilangan bulat yang dibaca dari papan ketik. Asumsikan N>0
#include <iostream>

int main() {

    //DEKLARASI
    int N;  //Banyaknya data yang dibaca N>0
    int x;  //bilangan bulat yang dibaca dipaapn ketik
    int i;  //Pencacah banyaknya pengulangan
    double sum;    //Pencacah jumlah data
    double rerata; //Rata-rata semua data

    //ALGORITMA
    std::cout<<"Banyak Data : ";std::cin>>N;
    sum=0;
    for(i=1; i<=N; i++) {
        std::cout<<"Data "<<i<<" : ";std::cin>>x;        
        sum += x;
    }
    rerata = sum/N;
    std::cout<<rerata;

    return 0;

}