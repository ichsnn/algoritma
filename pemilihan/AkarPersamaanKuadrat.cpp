#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //DEKLARASI
    double a, b, c;     //koefisien-koefisien persamaan kuadrat
    double D;           //diskriminan
    double x1, x2;      //akar-akar persamaan kuadarat


    //ALGORITMA
    cout<<"Masukkan koefisien persaman (a:b:c) : ";
    cin>>a>>b>>c;
    
    D = b*b - 4*a*c;
    if(D < 0) {
        cout<<"Akar-akar persamaan kuadrat imaginer!";
    } else if(D > 0)  {
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
    } else {
        x1 = (-b + sqrt(D))/(2*a);
        x2 = x1;
    }

    cout<<"\nx1 = "<<x1<<"\n";
    cout<<"x2 = "<<x2<<"\n";

    return 0;
    
}