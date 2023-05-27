#include <stdio.h>

main ()
{
    int sum, total, tebak;

    printf("Masukkan nilai sum: ");
    scanf("%i", &sum);
    if(sum<=65)
        printf("Maaf silahkan coba lagi\n\n");
    else
        printf("Aku anak Informatika UNHAS\n\n");


    printf("Masukkan nilai tebak: ");
    scanf("%i", &tebak);
    printf("Masukkan nilai total: ");
    scanf("%i", &total);

    if(total==tebak)
        printf("Nilai total: %d\n",total);
    else
        printf("Nilai tebak: %d\n",tebak);


    printf("\nMasukkan nilai sum: ");
    scanf("%i", &sum);
    printf("\nMasukkan nilai total: ");
    scanf("%i", &total);

    if (sum==10|total<20)
        printf("tidak sesuai\n");
    else
        printf("sesuai!\n");
}
