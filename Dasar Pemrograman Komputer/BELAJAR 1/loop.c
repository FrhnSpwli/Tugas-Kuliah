#include <stdio.h>

int main ()
{
    int a;
    printf("Masukkan keluaran yang dibutuhkan: ");
    scanf("\n%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int e = 1; e <= a; e++)
        {
            printf(" x ");
            printf(" q ");
        }
        printf("\n");
    }
    return 0;
}