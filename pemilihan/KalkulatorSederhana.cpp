#include <iostream>

using namespace std;

int main() {

    //DEKLARSI 
    int op1, op2;
    char oprt;

    //ALGORITMA
    cin>>op1>>oprt>>op2;
    switch(oprt) {
        case '+': cout<<op1+op2; break;
        case '-': cout<<op1-op2; break;
        case '*': cout<<op1*op2; break;
        case '/': if((op1 && op2) != 0) {
                    cout<<op1/op2; break;
                  } else cout<<"error!"; break;
        
        default: cout<<"operator salah!"; break;       
    }    

    return 0;
}