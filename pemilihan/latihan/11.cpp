#include <iostream>

using namespace std;

int main() {

    //DEKLARASI
    struct tanggal {
        int dd;         //hari
        int mm;         //bulan
        int yy;         //tahun
    };
    tanggal t1, t2;
    int tahun1, bulan1, tahun2, bulan2;     //banyak hari pada bulan dan tahun tanggal tersebut
    int total1, total2;    
    int durasi;        

    //ALGORTMA
    cout<<"Masukkan tanggal pertama (dd mm yy) : ";
    cin>>t1.dd>>t1.mm>>t1.yy;
    cout<<"Masukkan tanggal kedua   (dd mm yy) : ";
    cin>>t2.dd>>t2.mm>>t2.yy;

    //menentukan hari tahun1, & hari bulan1
    if((t1.yy%4 == 0 && t1.yy%100 != 0) || t1.yy%400 == 0 ) {
        tahun1 = 366;
    } else tahun1 = 365;
    switch (t2.mm) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: bulan1 = 31; break;
        case 4:
        case 6:
        case 9:
        case 11: bulan1 = 30; break;
        case 2: if(tahun1 == 366) {
                    bulan1 = 29;
                } else bulan1 = 28; break;                
    }    

    switch (t1.mm) {        
        case 1: break;
        case 3: if(tahun1 == 366) bulan1 = 2*bulan1 + 29;
                else bulan1 = 2*bulan1 + 28; break;
        case 5: if(tahun1 == 366) bulan1 = 3*bulan1 + 29 + 30;
                else bulan1 = 3*bulan1 + 28 + 30; break;
        case 7: if(tahun1 == 366) bulan1 = 4*bulan1 + 29 + 2*30;
                else bulan1 = 4*bulan1 + 28 + 2*30; break;
        case 8: if(tahun1 == 366) bulan1 = 5*bulan1 + 29 + 2*30;
                else bulan1 = 5*bulan1 + 28 + 2*30; break;
        case 10: if(tahun1 == 366) bulan1 = 6*bulan1 + 29 + 3*30;
                 else bulan1 = 6*bulan1 + 28 + 3*30; break;
        case 12: if(tahun1 == 366) bulan1 = 7*bulan1 + 29 + 4*30;
                 else bulan1 = 7*bulan1 + 28 + 4*30; break;
        case 4: if(tahun1 == 366) bulan1 = bulan1 + 29 + 2*31;
                else bulan1 = bulan1 + 28 + 2*31; break;
        case 6: if(tahun1 == 366) bulan1 = 2*bulan1 + 29 + 3*31;
                else bulan1 = 2*bulan1 + 28 + 3*31; break;
        case 9: if(tahun1 == 366) bulan1 = 3*bulan1 + 29 + 5*31;
                else bulan1 = 3*bulan1 + 28 + 5*31; break;
        case 11: if(tahun1 == 366) bulan1 = 4*bulan1 + 29 + 6*31;
                 else bulan1 = 4*bulan1 + 28 + 6*31; break;
        case 2: if(tahun1 == 366) bulan1 = bulan1 + 31;
                else bulan1 = bulan1 + 31; break;                
    } 

    //menentukan hari tahun2, & hari bulan2
    if((t2.yy%4 == 0 && t2.yy%100 != 0) || t2.yy%400 == 0 ) {
        tahun2 = 366;
    } else tahun2 = 365;
    switch (t2.mm) {        
        case 1: 
        case 3: 
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: bulan2 = 31; break;
        case 4:
        case 6:
        case 9:
        case 11: bulan2 = 30; break;
        case 2: if(tahun2 == 366) {
                    bulan2 = 29;
                } else bulan2 = 28; break;                
    }   

    switch (t2.mm) {        
        case 1: break;
        case 3: if(tahun2 == 366) bulan2 = 2*bulan2 + 29;
                else bulan2 = 2*bulan2 + 28; break;
        case 5: if(tahun2 == 366) bulan2 = 3*bulan2 + 29 + 30;
                else bulan2 = 3*bulan2 + 28 + 30; break;
        case 7: if(tahun2 == 366) bulan2 = 4*bulan2 + 29 + 2*30;
                else bulan2 = 4*bulan2 + 28 + 2*30; break;
        case 8: if(tahun2 == 366) bulan2 = 5*bulan2 + 29 + 2*30;
                else bulan2 = 5*bulan2 + 28 + 2*30; break;
        case 10: if(tahun2 == 366) bulan2 = 6*bulan2 + 29 + 3*30;
                 else bulan2 = 6*bulan2 + 28 + 3*30; break;
        case 12: if(tahun2 == 366) bulan2 = 7*bulan2 + 29 + 4*30;
                 else bulan2 = 7*bulan2 + 28 + 4*30; break;
        case 4: if(tahun2 == 366) bulan2 = bulan2 + 29 + 2*31;
                else bulan2 = bulan2 + 28 + 2*31; break;
        case 6: if(tahun2 == 366) bulan2 = 2*bulan2 + 29 + 3*31;
                else bulan2 = 2*bulan2 + 28 + 3*31; break;
        case 9: if(tahun2 == 366) bulan2 = 3*bulan2 + 29 + 5*31;
                else bulan2 = 3*bulan2 + 28 + 5*31; break;
        case 11: if(tahun2 == 366) bulan2 = 4*bulan2 + 29 + 6*31;
                 else bulan2 = 4*bulan2 + 28 + 6*31; break;
        case 2: if(tahun2 == 366) bulan2 = bulan2 + 31;
                else bulan2 = bulan2 + 31; break;                
    }

    total1 = t1.yy*365 + bulan1 + t1.dd;       //total hari tanggal pertama
    total2 = t2.yy*365 + bulan2 + t2.dd;       //total hari tanggal kedua    
    
    if(total2>=total1) {
        durasi = total2 - total1;
    } else durasi = -(total2 - total1);

    int kemunculan_kabisat=0;
    if(t2.yy>t1.yy) {
        for(t1.yy; t1.yy<t2.yy; t1.yy++) {
            if((t1.yy%4 == 0 && t1.yy%100 != 0) || t1.yy%400 == 0)  {
                kemunculan_kabisat+=1;
            }        
    }

    durasi += kemunculan_kabisat;

    cout<<"Durasi kedua tanggal tersebut adalah "<<durasi<<endl;         

    return 0;

}