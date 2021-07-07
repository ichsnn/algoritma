#include <iostream>
using namespace std;

const int NMAKS = 100;
typedef int Larik[NMAKS];

struct LarikInt
{
    Larik X;
    int N;
};

// VOID OR FUNCTION
void SisispElemenBaru(LarikInt &A, int elementBaru)
{
    // Declaration
    int i, j;
    bool ketemu;
    // Algorithm
    ketemu = false;
    i = 1;
    while (i <= A.N && !ketemu)
    {
        if (elementBaru < A.X[i])
            ketemu = true;
        else
            i++;
    }
    if (ketemu)
    {
        for (j = A.N; j >= i; j--)
        {
            A.X[j + 1] = A.X[j];
        }
        A.X[i] = (elementBaru);
    }
    else
    {
        A.X[A.N + 1] = (elementBaru);
    }
    A.N++;
}

// MAIN PROGRAM
int main(int argc, char const *argv[])
{
    LarikInt A;
    A.X[1] = 4;
    A.X[2] = 5;
    A.X[3] = 7;
    A.X[4] = 8;
    A.X[5] = 9;
    A.X[6] = 10;
    A.N = 6;
    cout<<"Sebelum ditambah : ";
    for (int i = 1; i <= A.N; i++)
    {
        cout<<A.X[i]<<"\t";
    }
    cout<<endl;
    SisispElemenBaru(A, 6);
    cout<<"Sesudah ditambah : ";
    for (int i = 1; i <= A.N; i++)
    {
        cout<<A.X[i]<<"\t";
    }
    return 0;
}
