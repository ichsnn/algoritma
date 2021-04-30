//Mencetak "Hello World" sebanyak N kali
#include <iostream>

int main() {

    //DEKLARASI
    int N;  //jumlah pengulangan
    int i;  //pencacah pengulangan

    //ALGORITMA
    std::cin>>N;
    for(i=1; i<=N; i++) {
        std::cout<<"Hello World!\n";
    }

    return 0;
    
}