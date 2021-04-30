//Menghitung rata-rata N buah data bilangan bulat yang dibaca dari papan ketik Asumsikan N > 0
#include <iostream>

int main() {

    //DEKLARASI
    int N;              //Banyak Data   N > 0
    int x;              //Bilangan bulat yang dibaca dari papan ketik
    int i;              //pencacah banyaknya pengulangan
    double sum;         //pencatat jumlah data
    double rerata;      //rata-rata semua data

    //ALGORITMA
    std::cout<<"Banyak Data : ";std::cin>>N;
    sum = 0;
    i = 1;
    while(i<=N) {
        std::cin>>x;
        sum+=x;
        i++;
    }
    rerata = sum/N;
    std::cout<<rerata<<"\n";

    return 0;
    
}