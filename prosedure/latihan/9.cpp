#include <iostream>

using namespace std;

//DEKLARASI PURWARUPA PROSEDURE YANG DIGUNAKAN
void TanggalSebelumnya(int *dd, int *mm, int *yyyy);

main() {

    //DEKLARASI
    struct tanggal{
        int dd;     //hari
        int mm;     //bulan
        int yyyy;   //tahun
    };
    tanggal t;

    //PROGRAM UTAMA
    cout<<"Tanggal (dd-mm-yyyy)? : ";cin>>t.dd>>t.mm>>t.yyyy;
    TanggalSebelumnya(&t.dd, &t.mm, &t.yyyy);
    cout<<"Sebelumnya adalah tanggal "<<t.dd<<"-"<<t.mm<<"-"<<t.yyyy<<endl;

}

void TanggalSebelumnya(int *dd, int *mm, int *yyyy) {

    //DEKLARASI
    bool kabisat;

    //ALGORITMA
    if((*yyyy%4 == 0 && *yyyy%100 != 0) || *yyyy%400 == 0) {
        kabisat = true;
    }    
    switch(*mm) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(*dd==1) {
                if(*mm==1) {
                    *mm = 12;
                    *dd = 30;
                    (*yyyy)--;
                } else {                    
                    if(*mm==3 && kabisat) {
                        *dd = 29;                        
                    } else if(*mm==3 && !kabisat) {
                        *dd = 28;
                    } else {
                        *dd = 31;
                    }                     
                    (*mm)--;
                }                                                                                                      
            } else (*dd)--;            
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(*dd==1) {
                (*mm)--;
                *dd = 31;
            } else (*dd)--;
            break;
        case 2:
            if(*dd==1) {
                (*mm)--;
                *dd = 31;
            } else (*dd)--;
            break;
    }
}