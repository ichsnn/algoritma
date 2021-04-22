#include <iostream>

using namespace std;

int main() {

    //DEKLARSI 
    int op1, op2, ans;
    char oprt;

    //ALGORITMA
    cin>>op1>>oprt>>op2;
    switch(oprt) {
        case '+': ans = op1+op2; break;
        case '-': ans = op1-op2; break;
        case '*': ans = op1*op2; break;
        case '/': if((op1 && op2) != 0) {
                    ans = op1/op2; break;
                  } else cout<<"error!"; break;
        
        default: cout<<"operator salah!"; break;       
    }
    cout<<ans;

    return 0;
}