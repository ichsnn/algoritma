#include<iostream>
#include<string.h>

using namespace std;

const int Nmaks = 100;

void Concat(char s1[], char s2[]);

main() {
    //DEKLARASI
    char s1[Nmaks];
    char s2[Nmaks];	
	cout<<"String 1: ";cin.getline(s1, Nmaks);    
    cout<<"String 2: ";cin.getline(s2, Nmaks);    
    Concat(s1, s2);    
}

void Concat(char s1[], char s2[]) {
    //DEKLARASI
    int i, j;        
    //ALGORITMA
    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++,i++) {
        s1[i] = s2[j];
    }
    s1[i]='\0';         
    cout<<s1<<endl;
}