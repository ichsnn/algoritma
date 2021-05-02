#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    //DEKLARASI
    int x;
    int i;
    int sum;
    double rerata;
    FILE *Fin;

    //ALGORITMA
    Fin = fopen("data.txt", "r");
    sum = 0;
    i = 1;
    fscanf(Fin, "%d", &x);
    while((x!=-1)) {
        i += 1;
        sum = sum + x;
        fscanf(Fin, "%d", &x);
    }
    i -= 1;
    if(i!=0) {
        rerata = float(sum)/i;
        printf("Rata-rata = %f", rerata);
    } else printf("Arsip kosong (hanya berisi 9999) \n");
}