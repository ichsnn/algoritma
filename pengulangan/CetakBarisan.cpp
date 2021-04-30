//Mencetak 1, 2, ..., N; nilai N ditentukan terlebih dahulu
#include <iostream>

int main () {

    //DEKLARASI
    int i;
    int N;

    //ALGORITMA
    std::cin>>N;
    for(i=1; i<=N; i++) {
        std::cout<<i<<"\n";
    }

    return 0;
    
}