#include <iostream>
#include <stdio.h>

using namespace std;

void SalinString(char s1[], char s2[]);

main() {
    //DEKLARASI
    char s1[100];
    char s2[100];
    //ALGORITMA
    printf("String 1 : ");
    cin.getline(s1, 100);
    SalinString(s1, s2);
    printf("String 2 : %s", s2);    
}

void SalinString(char s1[], char s2[]) {
    //DEKLARASI
    int i;
    //ALGORITMA
    i = 0;
    while(s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
}