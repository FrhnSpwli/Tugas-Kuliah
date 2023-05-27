#include <stdio.h>

int main ()
{
    int nilai, jumlah = 0;

    printf("Masukkan Nilai: ");
    scanf("%d", &nilai);

    printf("Bilangan kelipatan dua dari angka %d sampai 100\n\n", nilai);

    if(nilai % 2 == 1)
    {
        nilai++;
    }

    do
    {
        printf("%d\n", nilai);
        nilai+=2;
        jumlah++;
    } while (nilai<=100);

    printf("\nTerdapat %d bilangan genap\n", jumlah);
    return 0;    
}