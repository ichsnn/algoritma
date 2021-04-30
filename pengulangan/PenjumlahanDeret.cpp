//Menjumlahkan deret 1+2+3+...+N dengan N bilangan positif
#include <iostream>

int main() {

    //DEKLARASI
    int i;
    int N;
    int sum;

    //ALGORITMA
    std::cin>>N;
    sum = 0;
    for(i=1; i<=N; i++) {
        sum += i;
    }
    std::cout<<sum<<"\n";

    return 0;
}