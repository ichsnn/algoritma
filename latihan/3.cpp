#include <iostream>

int main(){
    
    //Deklarasi
    double c;        //suhu dalam derajat celcius
    double f;        //suhu dalam derajat farenheit

    //Algoritma
    std::cout<<"Masukkan suhu ("<<char(248)<<"C) : "; 
    std::cin>>c;            //input suhu dalam derajat celcius
    f = 9.0/5*c+32;       //menghitung suhu dalam derajat farenheit 
    std::cout<<f<<char(248)<<"F\n";   //menampilkan suhu dalam derajat farenheit

    return 0;

}

/*
  dalam pembagian pencahan 9/5, harus bertipe data
  - double/int      - float/int      
  - int/double      - int/float
  - double/double   - float/float
  agar hasil nya benar, jika tidak dirubah, 9/5 = 1
*/
