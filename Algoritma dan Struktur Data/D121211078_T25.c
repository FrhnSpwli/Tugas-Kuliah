#include <stdio.h>

int main (){
    int x, y, z;

    printf("Masukkan nilai x : ");
    scanf("%d", &x);
    printf("Masukkan nilai y : ");
    scanf("%d", &y);

    if (x + y > 25){
        printf("Tidak Valid!");
    }
    else{
        z = 25-x-y;
        printf("Nilai z : %d\n", z);
        printf("Nilai x, y, z secara berurutan adalah %d + %d + %d = 25\n", x, y, z);
    }

    return 0;
}