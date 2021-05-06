#include <iostream>
#include <string>

using namespace std;

//DEKALARASI PURWARUPA PROSEDURE   
void kata(int bil);

main() {

    //DEKLARASI
    int x;    

    //PROGRAM UTAMA
    cout<<"Masukkan Bilangan Positif : ";cin>>x;
    kata(x);
}

void kata(int bil){

    //DEKLARASI             
    string luaran;
    int sisa;

    //ALGORITMA          
    if(bil - (bil%1000) == 1000) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "seribu";
        sisa = bil%1000;
    }       
    if(bil == 900 || sisa - (sisa%900) == 900) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "sembilan ratus";
        bil == 900 ? sisa = bil%900 : sisa %= 900;
    }  
    if(bil == 800 || sisa - (sisa%800) == 800) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "delapan ratus";
        bil == 800 ? sisa = bil%800 : sisa %= 800;
    }  
    if(bil == 700 || sisa - (sisa%700) == 700) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "tujuh ratus";
        bil == 700 ? sisa = bil%700 : sisa %= 700;
    }  
    if(bil == 600 || sisa - (sisa%600) == 600) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "enam ratus";
        bil == 100 ? sisa = bil%600 : sisa %= 600;
    }  
    if(bil == 500 || sisa - (sisa%500) == 500) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "lima ratus";
        bil == 500 ? sisa = bil%500 : sisa %= 500;
    }  
    if(bil == 400 || sisa - (sisa%400) == 400) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "empat ratus";
        bil == 400 ? sisa = bil%400 : sisa %= 400;
    }  
    if(bil == 300 || sisa - (sisa%300) == 300) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "tiga ratus";
        bil == 300 ? sisa = bil%300 : sisa %= 300;
    }  
    if(bil == 200 || sisa - (sisa%200) == 200) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "dua ratus";
        bil == 200 ? sisa = bil%200 : sisa %= 200;
    }  
    if(bil == 100 || sisa - (sisa%100) == 100) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "seratus";
        bil == 100 ? sisa = bil%100 : sisa %= 100;
    }    
    if(bil == 11 || sisa == 11) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "sebelas";
    }
    if(bil == 10 || sisa == 10) {
        if (luaran.length()>0) {
            luaran += " ";
        }
        luaran += "sepuluh";        
    }
    
    if(bil<10 || sisa <10) {
        if(bil == 9 || sisa == 9) {
            if (luaran.length()>0) {
                luaran += " ";
            }
            luaran += "sembilan";
        }    
        if(bil == 8 || sisa == 8) {
            if (luaran.length()>0) {
                luaran += " ";
            }
            luaran += "delapan";
        }        
        if(bil == 7 || sisa == 7) {
            if (luaran.length()>0) {
                luaran += " ";
            }
            luaran += "tujuh";
        }
        if(bil == 6 || sisa == 6) {
            if (luaran.length()>0) {
                luaran += " ";
            }
            luaran += "enam";
        }
        if(bil == 5 || sisa == 5) {
            if (luaran.length()>0) {
                luaran += " ";
            }
            luaran += "lima";
        }        
        if(bil == 4 || sisa == 4) {
            if (luaran.length()>0) {
                luaran += " ";
            }
            luaran += "empat";
        }        
        if(bil == 3 || sisa == 3) {
            if (luaran.length()>0) {
                luaran += " ";
            }
            luaran += "tiga";
        }
        if(bil == 2 || sisa == 2) {
            if (luaran.length()>0) {
                luaran += " ";
            }
            luaran += "dua";
        }
        if(bil == 1 || sisa == 1) {
            if (luaran.length()>0) {
                luaran += " ";
            }
            luaran += "satu";
        }
    }
    
    
    cout<<luaran;
}