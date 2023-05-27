#include <stdio.h>

int main () {
    int n, jumlah, bil;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    if (n % 2 == 0) //jika 
    {
        for (int i = 1; i<=n; i++){
        printf("%d ", i);
        bil = i;
        i++;
        jumlah = jumlah + bil;
        }
    
        printf("\n%d", jumlah);
    }
    else {
        for (int i = 1; i<=n; i++){
        printf("%d ", i);
        bil = i;
        i++;
        jumlah = jumlah + bil;
        }
    
        printf("\n%d", jumlah);
    }

    return 0;
}

//program ini melakukan apa?
