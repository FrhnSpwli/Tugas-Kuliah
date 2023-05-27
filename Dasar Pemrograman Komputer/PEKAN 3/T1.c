/*
Nama : Andi Farhan Sappewali
NIM  : D121211078
Kelas: Informatika C
*/

#include <stdio.h>

int main ()
{
    //Nomor 1
    int sum;
    printf ("Masukkan Nilai Sum : ");
    scanf ("%d", &sum);

    if (sum < 65)
        printf("Maaf, Anda harus mencoba lagi!\n");
    
    //Nomor 2
    int total, tebak;
    printf ("Masukkan nilai tebak : ");
    scanf ("%d", &tebak);
    printf ("Masukkan nilai total : ");
    scanf ("%d", &total);

    if (total == tebak)
    printf ("Nilai total : %d\n", total);
    else 
    printf ("Nilai tebak : %d\n", tebak);

    //Nomor 3
    int sum1, total1;
    printf ("Masukkan nilai sum : ");
    scanf ("%d", &sum1);
    printf ("Masukkan nilai total : ");
    scanf ("%d", &total1);

    if (sum1 ==  10 , total1 < 20)
        printf ("Tidak sesuai!\n");
    else
    printf ("Silahkan anda ngulang");
}