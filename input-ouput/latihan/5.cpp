#include <iostream>

int main(){
    
    //Deklarasi
    float v;    //kecepatan (km/jam)
    float t;    //waktu (jam)
    float s;    //jarak yang ditempuh (km)

    //Algoritma
    std::cin>>v>>t;     //input kecepatan dan waktu (km)
    s = v*t;            //menghitung jarak (jam)
    std::cout<<s;       //ouput jarak (km)

    return 0;
}
