#include <iostream>
using namespace std;

const int NMAKS = 100;
typedef double KoefPolinom[NMAKS];
struct Polinom
{
    int N;
    KoefPolinom a;
};

// FUNCTION
void BacaKoefisien(Polinom &p)
{
    // Declaration
    int i;
    // Algorithm
    for (i = 0; i <= p.N; i++)
    {
        cout<<i<<" ";
        cin >> p.a[i];        
    }    
}
double Pangkat(double x, int m)
{
    // Declaration
    double hasil;
    int i;
    // Algorithm
    hasil = 1;
    for (i = 1; i <= m; i++)
    {
        hasil *= x;
    }
    return hasil;
}
double Poli(Polinom p, double x)
{
    // Declaration
    double jumlah;
    int i;
    // Algorithm
    jumlah = 0;
    for (i = 0; i <= p.N; i++)
    {
        jumlah += p.a[i] * Pangkat(x, i);
    }
    return jumlah;
}
void JumlahPolinom(Polinom p1, Polinom p2, Polinom &p3)
{
    // Declaration
    int i;
    // Algorithm
    if (p1.N > p2.N)
    {
        p3.N = p1.N;
    }
    else
    {
        p3.N = p2.N;
    }
    i = 0;
    while (i <= p1.N && i <= p2.N)
    {
        p3.a[i] = p1.a[i] + p2.a[i];
        i++;
    }
    while (1 <= p1.N)
    {
        p3.a[i] = p1.a[i];
        i++;
    }
    while (i <= p2.N)
    {
        p3.a[i] = p2.a[i];
        i++;
    }
}

// MAIN PROGRAM
int main(int argc, char const *argv[])
{
    // Declaration
    Polinom p1, p2, p3;
    // Program
    p1.N = 5;
    BacaKoefisien(p1);
    cout<<endl;   
    cout<<"f(0) = "<<Poli(p1, 0);   //Nilai dari fungsi polinom f(0)
    return 0;
}
