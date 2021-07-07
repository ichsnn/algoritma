#include <iostream>
#include <string>
using namespace std;

// VOID OR FUNCTION
int KarakterToInt(char c)
{
    return c - '0';
}
void KonversiStrKeInt(string s, int &N)
{
    // Declaration
    int i;
    int pengali;
    // Algorithm
    pengali = 1;
    cout << s << endl;
    cout << N << endl;
    for (i = (s.length() - 1); i >= 0; i--)
    {
        cout << sizeof(s[i]) << " ";
        N += KarakterToInt(s[i]) * pengali;
        pengali *= 10;
        cout << N << endl;
    }
}

// MAIN PROGRAM
int main(int argc, char const *argv[])
{
    // Declration
    string s;
    int N = 0;
    // Algorithm
    KonversiStrKeInt("1234", N);
    cout << N;
    return 0;
}
