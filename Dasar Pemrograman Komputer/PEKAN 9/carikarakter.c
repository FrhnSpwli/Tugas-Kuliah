#include <stdio.h>
#include <string.h>

main(){
    char str[]="ABcdBe";
    char *hasil1, *hasil2;

    hasil1 = strchr(str, 'B');
    hasil2 = strchr(str, 'X');

    printf("Dari string %s", str);
    printf("\nkarakter B = %s\n", hasil1);
    printf("karakter X = %s\n", hasil2);
}