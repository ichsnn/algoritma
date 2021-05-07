#include <iostream>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG DIGUNAKAN
void JarakHari(int dd, int mm, int yyyy, int *x);

main() {

    //DEKLARASI
    struct tanggal {
        int dd;     //hari
        int mm;     //bulan
        int yyyy;   //tahun
    };
    tanggal t;
    int jarak;

    //PROGRAM UTAMA
    cout<<"Tanggal (dd-mm-yyyy) ? : ";cin>>t.dd>>t.mm>>t.yyyy;
    JarakHari(t.dd, t.mm, t.yyyy, &jarak);
    cout<<"Jarak hari dengan tanggal 1-1-1900 adalah "<<jarak<<" hari"<<endl;
}

void JarakHari(int dd, int mm, int yyyy, int *x) {

    //DEKLARASI
    int Ydays;
    int Mdays;
    int DaysSum; 
    int DaysSum1; //1-1-1900      
    bool leap;
    int leap_counter;

    //ALGORITMA        
    Ydays = yyyy*365;

    switch(mm) {
        case 1: Mdays = 31; break;
        case 3: Mdays = 2*31; break;
        case 5: Mdays = 3*31 + 30; break;
        case 7: Mdays = 4*31 + 30*2; break;
        case 8: Mdays = 5*31 + 30*2; break;
        case 10: Mdays = 6*31 + 30*3; break;
        case 12: Mdays = 7*31 + 30*4; break;
        case 4: Mdays = 30 + 31*2; break;
        case 6: Mdays = 2*30 + 31*3; break;
        case 9: Mdays = 3*30 + 31*5; break;
        case 11: Mdays = 4*30 + 31*6; break;
        case 2:
            if(leap) {
                Mdays = 29 + 31;
            } else Mdays = 28 + 31;
            break;
    }
    if(mm > 2) {
        if(leap) {
            Mdays += 29;
        } else Mdays += 28;
    }
    DaysSum = Ydays + Mdays + dd;    

    //Total hari tanggal 1-1-1900;
    DaysSum1 = (1900*365) + (1*31) + 1;

    //Hitung kemunculan kabisat dari tanggal terkecil
    leap_counter = 0;
    int i = 1900;
    if(yyyy>i) {
        for(i; i<yyyy; i++) {      //Menggunakan var i sebagai peubah tahun 1900
            if((i%4 == 0 && i%100 != 0) || i%400 == 0)  {
                leap_counter++;
            }        
        } 
    } else {
        for(yyyy;yyyy<i;yyyy++) {
            if((yyyy%4 == 0 && yyyy%100 != 0) || yyyy%400 == 0) {
                leap_counter++;
            }
        }
    }        

    //Selisih
    if(DaysSum>=DaysSum1) {
        *x = (DaysSum - DaysSum1) + leap_counter;
    } else *x = (DaysSum1 - DaysSum) + leap_counter;
}