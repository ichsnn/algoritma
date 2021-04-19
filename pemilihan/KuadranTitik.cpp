#include <iostream>

int main() {

    //DEKLARASI
    struct titik {
        float x, y;
    };
    titik p;

    //ALGORITMA
    std::cout<<"Masukkan titik x : ";
    std::cin>>p.x;
    std::cout<<"Masukkan titik y : ";
    std::cin>>p.y;

    if(p.x>0 && p.y>0) std::cout<<"Kuadran 1";
    else if(p.x<0 && p.y>0) std::cout<<"Kuadran 2";
    else if(p.x<0 && p.y<0) std::cout<<"Kuadran 3"; 
    else if(p.x>0 && p.y<0) std::cout<<"Kuadran 4";
    else std::cout<<"Tidak terletak di kuadran manapun";

    return 0;

}