#include <iostream>

int main() {

    //DEKLARASI
    int sum;
    int N;
    int i;

    //DEKLARASI
    std::cin>>N;
    i=1;
    sum = 0;
    do {
        sum += i;
        i++;
    } while(i<=N);
    std::cout<<sum;
    return 0;
}