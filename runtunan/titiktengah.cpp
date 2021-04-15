#include <iostream>

int main(){

    //Deklarasi
    struct titik {
        float x;
        float y;
    };
    titik P1, P2, P3;
    
    //Algoritma
    std::cin>>P1.x>>P1.y;       //Baca titik P1
    std::cin>>P2.x>>P2.y;       //Baca titik P2
    P3.x = (P1.x + P2.x)/2;
    P3.y = (P1.y + P2.y)/2;
    std::cout<<P3.x<<" "<<P3.y<<"\n";

    return 0;

}