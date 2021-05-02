#include <iostream>
#include <windows.h>

int main() {

    //DEKLARASI
    int N, i;

    //ALGORITMA
    std::cout<<"Anak Ayam Turun ";std::cin>>N;
    for(i = N; i > 2 ; i--) {
        if(i==1) {
            std::cout<<"Anak ayam turun "<<i<<", mati satu tinggal induknya"<<std::endl;
        }
        else {
            std::cout<<"Anak ayam turun "<<i<<", mati satu tinggal "<<i-1<<""<<std::endl;
            Sleep(2000);
        }
    }    
    return 0;

}