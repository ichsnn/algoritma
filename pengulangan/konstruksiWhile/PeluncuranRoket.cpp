//Hitung mundur peluncuran roket
#include <iostream>

int main() {

    //DEKLARASI
    int i, p;

    //ALGORITMA
    i=10;
    while(i>=0) {
        std::cout<<i<<"\n";
        p = 1;
        while(p<=1000000000) {            
            p++;
        }
        i--;
    }
    std::cout<<"GO!\n";

    return 0;

}
