#include <iostream> 

int main() {

    //VERSI 1

    //DEKLARASI
    int a,b,c,maks;

    //ALGORITMA
    std::cout<<"Masukkan bilangan 1 : ";
    std::cin>>a;
    std::cout<<"Masukkan bilangan 2 : ";
    std::cin>>b;
    std::cout<<"Masukkan bilangan 3 : ";
    std::cin>>c;
    if(a>b) maks = a;
    else maks = b;
    if(c>maks) maks = c;
    std::cout<<"\nBilangan terbesar adalah "<<maks<<"\n";

    system("pause");
    system("cls");

    //VERSI 2

    //DEKLARASI
    int d,e,f,max;

    //ALGORITMA
    std::cout<<"Masukkan bilangan 1 : ";
    std::cin>>d;
    std::cout<<"Masukkan bilangan 2 : ";
    std::cin>>e;
    std::cout<<"Masukkan bilangan 3 : ";
    std::cin>>f;
    if(d>e){
        if (d>f) max = d;
        else max = f;
    } else {
        if (e>f) max = e;
        else max = f;
    }
    std::cout<<"\nBilangan terbesar adalah "<<max<<"\n";

    system("pause");
    system("cls");

    //VERSI 3

    //DEKLARASI
    int g,h,i,mks;

    //ALGORITMA
    std::cout<<"Masukkan bilangan 1 : ";
    std::cin>>g;
    std::cout<<"Masukkan bilangan 2 : ";
    std::cin>>h;
    std::cout<<"Masukkan bilangan 3 : ";
    std::cin>>i;
    if((g>h)&&(g>i)) mks = g; 
    else {
        if ((h>g)&&(h>i)) mks = h;
        else mks = i;
    }    
    std::cout<<"\nBilangan terbesar adalah  "<<mks<<"\n";

    return 0;

}