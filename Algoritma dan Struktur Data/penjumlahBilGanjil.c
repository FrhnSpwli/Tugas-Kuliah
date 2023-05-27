#include <stdio.h>

int main (){

    int n, jumlah, bilganjil;

    printf("Masukkan nilai N = ");
    scanf("%d", &n);

    // for (int i = 1; i<=n;i++){
    // printf("%d", i);
    // i++;
    // n++;
    // }

    jumlah = 0;
    bilganjil = 1;

    for(int i = 1; i <= n; i++){
        printf("%d ", bilganjil);
        jumlah = jumlah + bilganjil;
        bilganjil +=2;
    }
    
    printf("\nJika dijumlahkan hasilnya adalah ");
    printf("%d", jumlah);

    return 0;
}

