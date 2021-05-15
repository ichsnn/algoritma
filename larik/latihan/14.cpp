#include <iostream>
#include <stdio.h>

using namespace std;

const int Nmaks = 100;

void HilangkanC(char s[]);

main() {
    //DEKLARASI
    char s[Nmaks];
    //ALGORITMA
    cout<<"Masukkan string : ";
    cin.getline(s, Nmaks);
    HilangkanC(s);    
    cout<<s<<endl;    
}

void HilangkanC(char s[]) {
    //DEKLARASI
    int i, k;
    //ALGORITMA
    for(i=0;s[i]!='\0';i++) {
        if(s[i] == 'c') {            
            s[i] = ' ';                                    
            }
        }        
    }    
}
