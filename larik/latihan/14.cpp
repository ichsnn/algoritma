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
    int i, j, n;    
    //ALGORITMA 
    n = s.size();
    for(i=0;i<n;i++) {
        if(s[i] == 'c' || s[i] == 'C') {
            for(j=i+1;j<n;j++) {
                s[j-1] = s[j];
            }
            s[n-1] = '\0';                      
            n--;
        }
    }
    cout<<n<<endl;    
    return s;
}
