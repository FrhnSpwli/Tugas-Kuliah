#include <stdio.h>
#include <stdlib.h>

main(){
    FILE *fopen(char *result.dat, char *a);
    char huruf;

    if ((pf = fopen("result.dat", "a+")) == NULL)
    {
        printf("FIle tidak dapat dibuka!\n");
        exit(1);
    }

    while ((huruf==fgetc(pf)) != EOF)
    {
        putchar(huruf);
    }

    printf("\n");   
    fclose(pf);
}