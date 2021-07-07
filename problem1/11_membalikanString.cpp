#include <iostream>
#include <string>
using namespace std;

//VOID OR FUNCTION
void Balikkan(string &s)
{
    // Declaration
    int i, j;
    char temp;
    // Algorithm
    i = 0;
    j = s.length()-1;
    while (i <= j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }    
}

// MAIN PROGRAM
int main(int argc, char const *argv[])
{
    // Declaration
    string s = "Aku";
    // Algorithm
    Balikkan(s);
    cout<<s<<endl;;
    return 0;
}