#include <stdio.h>

/*
Nama : Andi Farhan Sappewali
Nim  : D121211078
MID TEST DASAR PEMROGRAMAN KOMPUTER
*/

int main()
{
    int a;
    char b;
    start:
    printf("\nMasukkan sebuah angka : ");
    scanf("%d", &a);

    if(a>=0)
        {if(a%2 == 0)
        printf("Angka %d adalah bilangan genap positif\n", a);
        else if(a%2 == 1)
        printf("Angka %d adalah bilangan ganjil positif\n", a);}
    if(a<0)
        {if(a%2 == 0)
        printf("Angka %d adalah bilangan genap negatif\n", a);
        else if(a%2 == -1)
        printf("Angka %d adalah bilangan ganjil negatif\n", a);}
    
    ulang:
    printf("\nLanjut(Y/N) : ");
    scanf("\n%c", &b);
    
    if (b=='Y' || b=='y')
    goto start;
    if (b=='N'|| b=='n')
    return 0;
    else
    printf("\nHanya bisa menjawab dengan Y atau N\n");
    goto ulang;
}