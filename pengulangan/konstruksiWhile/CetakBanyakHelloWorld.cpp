//Mencetak "Hello World" sebanyak N kali
#include <iostream>

int main() {

    //DEKLARASI
    int N;  //jumlah pengulangan
    int i;  //pencacah pengulangan

    //ALGORITMA
    std::cin>>N;
    i=1;
    while(i<=N) {
        std::cout<<"Hello World!\n";
        i++;
    }
    


    return 0;

}