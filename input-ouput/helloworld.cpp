#include <iostream>

int main(){

    //versi 1
    std::cout<<"Hello World\n";

    system("pause");
    system("cls");

    //-------------------------------

    //versi2

    /*Deklarasi*/
    std::string pesan;
    
    /*Algoritma*/
    pesan = "Hello World\n";
    std::cout<<pesan;

    system("pause");
    system("cls");

    //-------------------------------

    //versi3

    /*Deklarasi*/
    const std::string pesan1 = "Hello World\n";
    

    /*Algoritma*/
    std::cout<<pesan1;

    system("pause");
    system("cls");

    return 0;
}
