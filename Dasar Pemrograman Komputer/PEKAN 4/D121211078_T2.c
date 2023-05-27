#include <stdio.h>
//TUGAS 2 DPK_D121211078_ANDI FARHAN SAPPEWALI
int main() 
{
    printf("\nTugas 2 DPK\n");
    int angka;
    printf("Ingin sampai angka berapa = ");
    scanf("%d", &angka);

    for(int i = 1; i <= angka; i++)
    for(int j = 1; j <= i; j++)
    {
        printf("%d", i);
        if (j == i)
            printf("\n");
    }
    printf("\nMission Completed\n");
    return 0;
}