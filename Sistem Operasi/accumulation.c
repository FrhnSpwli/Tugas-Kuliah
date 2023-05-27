#include <stdio.h>
#include <stdlib.h>

int main() {
    //print jumlah angka 1-499
    int i;
    int sum = 0;
    for (i = 0; i < 500; i++) {
        sum += i+1;
    }
    printf("Total accumulation is %d\n", sum);
}