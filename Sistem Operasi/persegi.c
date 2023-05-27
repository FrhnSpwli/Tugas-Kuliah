//luas persegi dan kelilingnya

#include <stdio.h>

int main()
{
    int sisi, luas, keliling;
    printf("Masukkan sisi persegi: ");
    scanf("%d", &sisi);
    luas = sisi * sisi;
    keliling = 4 * sisi;
    printf("Luas persegi adalah %d, dan kelilingnya adalah %d", luas, keliling);
    return 0;
}