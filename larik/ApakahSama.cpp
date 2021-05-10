#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int ApakahSama(char s1[], char s2[]);

main() {
    //DEKLARASI
    char s1[100];
    char s2[100];
    int kesamaan;
    //ALGORITMA
    printf("Kalimat pertama : ");
    gets(s1);    
    printf("Kalimat kedua   : ");
    gets(s2);
    kesamaan = ApakahSama(s1, s2);
    if(kesamaan == 1) {
        cout<<"Sama"<<endl;
    } else cout<<"Beda"<<endl;
    
}

int ApakahSama(char s1[], char s2[]){
    //DEKLARASI
    int i;
    int sama;
    //ALGORITMA
    if(strlen(s1) != strlen(s2)) {
        return 0;
    }
    else {
        i=1;
        sama = 1;
        while(s1[i] != '\0' && sama == 1) {
            if(s1[i] == s2[i]) {
                i++;                
            } else sama = 0;
        }
        return sama;
    }
}