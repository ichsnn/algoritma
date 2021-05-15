#include <iostream>
#include <string>

using namespace std;

string HilangkanC(string s);

main() {
    //DEKLARASI
    string s;
    //ALGORITMA
    cout<<"Masukkan string : ";
    getline(cin, s);
    s = HilangkanC(s);          
    cout<<s<<endl;    
}

string HilangkanC(string s) {
    //DEKLARASI
    int i, j;
    //ALGORITMA    
    for(i=0;i<s.size();i++) {
        if(s[i] == 'c' || s[i] == 'C') {
            for(j=i+1;j<s.size();j++) {
                s[j-1] = s[j];
            }
            s[s.size()-1] = '\0';                      
        }
    }
    return s;
}
