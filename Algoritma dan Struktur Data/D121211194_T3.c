#include <stdio.h>

int main (){
    int total = 15000, nomorBis, jamOperasi;
    char namaSopir[20];

    printf("Input nomor bis = ");
    scanf("%d", &nomorBis);
    printf("Input nama sopir = ");
    scanf("%s", &namaSopir);
    printf("Input Jam operasi= ");
    scanf("%d", &jamOperasi);

    for (int i = 1; i <= jamOperasi; i++){
        if (i > 3 && i <= 6){
            total += 5000;
        } else if (i > 6 && i <= 10){
            total += 7000;
        } else if (i > 10){
            total += 8000; 
        }
    }
    total += 16000;
    printf ("Besar setoran = %d", total);
}

    
