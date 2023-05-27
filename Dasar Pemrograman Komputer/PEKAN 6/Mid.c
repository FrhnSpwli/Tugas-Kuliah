#include <stdio.h>

int main ()
{
    int a;
    char b;

    printf("\nMasukkan sebuah angka: ");
    scanf("\n%d", &a);

    if ((a%2==0)||(a>=0))
    {printf("Angka %d adalah bilangan genap positif", a);}
    else if ((a%2==0)||(a<0))
    {printf("Angka %d adalah bilangan genap negatif", a);}
    else if ((a%2==1)||(a%2==-1)||(a>=0))
    {printf("Angka %d adalah bilangan ganjil positif", a);}
    else if ((a%2==1)||(a%2==-1)||(a<0))
    {printf("Angka %d adalah bilangan ganjil negatif", a);}
    else 
    {printf("Masukkan angka bukan huruf");
}