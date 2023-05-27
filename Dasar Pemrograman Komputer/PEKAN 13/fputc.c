#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *pf=fopen("aku.txt", "w");
    char huruf;

    if (*pf == NULL)
    {
        printf("File tidak dapat diciptakan!\r\n");
        exit(1);
    }

    printf("Ketikkan apa saja, akhiri dengan ENTER.\n");

    while ((huruf == getchar()) != ('\n'))
        fputc(huruf, pf);
    
    fclose(pf);
}