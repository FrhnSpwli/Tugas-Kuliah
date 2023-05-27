/* 
Nama : Andi Farhan Sappewali
Nim  : D121211078
DASAR PEMROGRAMAN KOMPUTER (INFORMATIKA C)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {    
    if (argc != 6){
        if (argc < 6){
            printf("Argument tidak cukup\n");
        }
        else {
            printf("Argument terlalu banyak\n");
        }
        return 0;
    }

    float res = 0;
    int num1 = atoi(argv[1]), num2 = atoi(argv[2]), num3 = atoi(argv[3]);
    char *op1 = argv[4];
    char *op2 = argv[5];

    if (*op1 == '+')
        res = num2 + num3;
    else if (*op1 == '-')
        res = num2 - num3;
    else if (*op1 == '*' || *op1 == 'x')
        res = num2 * num3;
    else if (*op1 == '*' || *op1 == '/')
        res = num2 / num3;
    else if (*op1 == '%')
        res = num2 % num3;
    else {
        printf("Operator tidak valid!\n");
        return 0;
    }

    if (*op2 == '+')
        res = num1 + res;
    else if (*op2 == '-')
        res = num1 - res;
    else if (*op2 == '*' || *op2 == 'x')
        res = num1 * res;
    else if (*op2 == ':' || *op2 == '/')
        res = num1 / res;
    else if (*op2 == '%')
        res = num1 % (int)res;
    else {
        printf("Operator tidak valid!\n");
        return 0;
    }
    
    printf("Hasil:\n");
    printf("%d %s (%d %s %d) = %g\n", num1, op2, num2, op1, num3, res);
    return 0;
} 