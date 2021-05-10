#include <stdio.h>
#include <iostream>

using namespace std;

int Panjang(char s[]);

main() {
    //DEKLARASI
    char s[100];    //string    
    //ALGORITMA
    printf("String : ");
    cin.getline(s, 100);    
    printf("Panjang string adalah %d", Panjang(s));
}

int Panjang(char s[]) {
    //DEKLARASI
    int i;
    //ALGORITMA
    i = 0;
    while(s[i]!='\0') {
        i++;
    }
    return i;
}