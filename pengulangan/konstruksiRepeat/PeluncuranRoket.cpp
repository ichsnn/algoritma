#include <iostream>

int main() {

    //DEKLARASI
    int i, p;

    //ALGORITMA
    i = 10;
    do {
        std::cout<<i<<"\n";
        i--;
        p = 0;
        do {
            p++;
        } while(p<=1000000000);
    } while(i>=0);

    std::cout<<"GO!";

    return 0;
}