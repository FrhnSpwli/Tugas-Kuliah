#include <stdio.h>

int main ()
{
    int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", nilai);

    if(nilai < 10)
        printf("Nilai %d kurang dari 20\n", nilai);
    else
        printf("Nilai %d lebih dari atau sama dengan 20", nilai);
    
    printf("Nilai yang anda masukkan adalah : %d\n", nilai);
    return 0;
}