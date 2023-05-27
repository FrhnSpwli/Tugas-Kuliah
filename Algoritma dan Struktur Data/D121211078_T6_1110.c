#include <stdio.h>

int menentukanPythagoras(int a, int b, int c);

int main() {
    int a, b, c; 

    printf("Masukkan ketiga bilangan dipisahkan koma(a,b,c): ");
    scanf("%d,%d,%d", &a, &b, &c);

    if(menentukanPythagoras(a, b, c)) {
        printf("Ketiga bilangan merupakan triple pythagoras\n");
    } else {
        printf("Ketiga bilangan bukan triple pythagoras\n");
    }
    return 0;
}


int menentukanPythagoras(int a, int b, int c) {
    if ( (c*c) == ((a*a) + (b*b)) ) {
        return 1;
    } else {
        return 0;
    }
}