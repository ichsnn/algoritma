#include <iostream>
#include <windows.h>

using namespace std;

void waktu();

main() {        
    //PROGRAM UTAMA
    waktu();
}

void waktu() {
    struct time {
        int s = 0;
        int m = 0;
        int h = 0;
        int dd = 1;
        int mm = 1;
        int yy = 2021;
    };
    time date;        
    int i, count=0;
    bool run=false;

    cout<<"Masukkan Waktu Sekarang"<<endl;
    cout<<"Jam:Menit:Detik  : ";cin>>date.h>>date.m>>date.s;
    cout<<"Hari/Bulan/Tahun : ";cin>>date.dd>>date.mm>>date.yy;
    if((date.h<=24 && date.m<=60 && date.s<=60) && (date.h>=0 && date.m>=0 && date.s>=0)) {
        run = true;
    } else cout<<"Masukkan salah!"<<endl;        
    while(run) {    
        system("cls");
        cout<<date.h<<":"<<date.m<<":"<<date.s<<endl;
        cout<<date.dd<<"/"<<date.mm<<"/"<<date.yy<<endl;
        date.s++;
        if(date.s>60) {
            date.s = 0;            
            date.m++;  
            if(date.m>60) {
                date.m = 0;
                date.h++;
                if(date.h>24) {
                    date.h = 0;
                    date.dd++;
                    switch (date.mm) {
                        case 1:
                        case 3:
                        case 5:
                        case 7:
                        case 8:
                        case 10:
                        case 12: 
                            if(date.dd>31) {
                                date.dd=0;
                                date.mm++;                                
                            }
                            if(date.mm>12) {
                                date.mm = 1;
                                date.yy++;
                            }
                            break;
                        case 4:
                        case 6:
                        case 9:
                        case 11:
                            if(date.dd>30) {
                                date.dd=0;
                                date.mm++;
                            }
                            break;
                        case 2:
                            if((date.yy%4==0 && date.yy%100!=0) || date.yy%400==0) {
                                if(date.dd>29) {
                                    date.dd=0;
                                    date.mm++;
                                }
                            } else {
                                if(date.dd>28) {
                                    date.dd=0;
                                    date.mm++;
                                }
                            }
                    }
                }
            }          
        }  
        Sleep(10);
    }
}