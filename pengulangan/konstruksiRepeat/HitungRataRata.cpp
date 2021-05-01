#include <iostream>

int main() {

    //DEKLARASI
    int x;
    float sum;
    int i;
    int N;
    float rerata;

    //ALGORITMA
    std::cout<<"Masukkan Banyak Data : ";std::cin>>N;
    i = 1;
    sum = 0;
    do {
        std::cout<<"Masukkan Nilai : ";std::cin>>x;
        sum += x;
        i++;
    } while(i<=N);
    rerata = sum/N;
    std::cout<<rerata;

    return 0;

}