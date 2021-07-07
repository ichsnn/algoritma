#include <iostream>
#include <string>
using namespace std;

// FUNCTION
bool palindrom(string huruf, int N)
{
    // Declaration
    int i;
    int j;
    bool pal;
    //Algorithm
    i = 0;
    j = N - 1;
    pal = true;
    while (i <= j && pal)
    {
        if (huruf[i] != huruf[j])
            pal = false;
        else
        {
            i++;
            j--;
        }
    }
    return pal;
}

// MAIN PROGRAM
int main(int argc, char const *argv[])
{
    // Declaration
    string kata;

    // Program
    cout << "Masukkan Kata : ";
    getline(cin, kata);
    if (palindrom(kata, kata.length()))
        cout << "Palindrom";
    else
        cout << "Bukan Palindrom";
    return 0;
}
