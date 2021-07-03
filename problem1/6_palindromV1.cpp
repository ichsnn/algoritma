#include <iostream>
#include <string>
using namespace std;

// FUNCTION
bool palindrom(string huruf, int N)
{
    // Declaration
    int i;
    int j;
    // Algorithm
    i = 0;
    j = N-1;   
    while (i <= j && huruf[i] == huruf[j])
    {
        i++;        
        j--;        
    }    
    if (i > j)
        return true;
    else
        return false;
}

// MAIN PROGRAM
int main(int argc, char const *argv[])
{   
    // Declaration 
    string kata;

    // Program
    cout<<"Masukkan Kata : ";getline(cin, kata);
    if(palindrom(kata, kata.length()))
        cout<<"Palindrom";
    else
        cout<<"Bukan Palindrom";
    return 0;
}
