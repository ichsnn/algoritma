//Leap years not include 

#include <iostream> 

using namespace std;

typedef struct {
    int dd;
    int mm;
    int yyyy;
} Tanggal;

int durasi(Tanggal T1, Tanggal T2);

main() {

    //DEKLARASI
    Tanggal T1, T2;
    int D;

    //ALGORITMA
    cout<<"Tanggal Pertama (dd/mm/yyyy) : ";cin>>T1.dd>>T1.mm>>T1.yyyy;
    cout<<"Tanggal Kedua   (dd/mm/yyyy) : ";cin>>T2.dd>>T2.mm>>T2.yyyy;
    cout<<endl;
    D = durasi(T1, T2);
    cout<<"Durasi kedua tanggal tersebut adalah "<<D<<" hari"<<endl;

}

int durasi(Tanggal T1, Tanggal T2) {
    
    //DEKLARASI    
    int t_hari1, t_hari2;     //total hari setiap tanggal

    //ALGORITMA
    t_hari1 = T1.yyyy * 365 + T1.mm * 30 + T1.dd;
    t_hari2 = T2.yyyy * 365 + T2.mm * 30 + T2.dd;
    
    if(t_hari1 >= t_hari2) {
        return t_hari1 - t_hari2;
    } else return t_hari2 - t_hari1;

    
}

