#include <iostream>

int main() {

    //DEKLARASI
    char cc;

    //ALGORITMA
    std::cout<<"Masukkan huruf : ";std::cin>>cc;
    cc = tolower(cc);
    if((cc=='a')||(cc=='i')||(cc=='u')||(cc=='e')||(cc=='e')) std::cout<<"huruf vokal";

    return 0;

}