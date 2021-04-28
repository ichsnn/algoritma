#include <iostream>

int main() {

    //DEKLARASI
    struct tanggal {
        int dd;         //Hari
        int mm;         //Bulan
        int yy;         //Tahun
    };
    tanggal t;

    //ALGORITM
    std::cout<<"Masukkan tanggal dd mm yy : ";
    std::cin>>t.dd>>t.mm>>t.yy;

    switch(t.mm) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: if(t.dd<31) t.dd++; else { t.dd=1; if(t.mm<12) t.mm++; else {t.mm=1; t.yy++;}} break;
        case 4:
        case 6:
        case 9:
        case 11: if(t.dd<30) t.dd++; else { t.dd=1; t.mm++;} break;
        case 2: if(t.dd<28) t.dd++;
                else {
                    if((t.yy%4==0 && t.yy%100!=0) || t.yy%400==0) {
                        if(t.dd == 28) t.dd++;
                        else { 
                            t.dd=1;
                            t.mm++;
                        }
                    } else {
                        t.dd = 1;
                        t.mm++;
                    }
                }
                break;        
    }

    std::cout<<"\nTanggal berikutnya adalah "<<t.dd<<"-"<<t.mm<<"-"<<t.yy<<"\n";

    return 0;
    
}