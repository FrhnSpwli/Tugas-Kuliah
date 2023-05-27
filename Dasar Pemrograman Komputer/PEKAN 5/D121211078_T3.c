#include <stdio.h>
//ANDI FARHAN SAPPEWALI (INFORMATIKA C)
int main ()
{
    printf("\n\t\t\t================================\n");
    printf("\t\t\tTUGAS 3. MEMBUAT TABEL PERKALIAN");
    printf("\n\t\t\t================================\n");
    printf("\n");

    int i, j;
    int tabel [10][10];
    for (i=1; i<=10; i++)
    {
        for(j=1; j<=5; j++)
        {
            tabel[i-1][j-1] = i * j;
            printf("%2d x %2d = %2d\t", i,j, tabel[i-1][j-1]); 
        }
    printf("\n");
    }
printf("\n");
    for (i=1; i<=10; i++)
    {
        for(j=6; j<=10; j++)
        {
            tabel[i-1][j-1] = i * j;
            printf("%2d x %2d = %2d\t", i, j, tabel[i-1][j-1]);
        }
    printf("\n");
    }
    return 0;
}
