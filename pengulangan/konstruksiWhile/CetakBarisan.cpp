//Mencetak 1, 2, ..., N; nilai N ditentukan terlebih dahulu
#include <iostream>

int main() {

    //DEKLARASI;
    int i;
    int N;

    //ALGORITMA
    std::cin>>N;
    i=1;
    while(i<=N) {
        std::cout<<i<<"\n";
        i++;
    }

    return 0;
    
}