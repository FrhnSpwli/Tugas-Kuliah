#include <stdio.h>

//dengan variabel baru
// void tukar() {
//     int a = 10;
//     int b = 20;
//     printf("a = %d, b = %d\n", a, b);
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("a = %d, b = %d", a, b);
// }

//tanpa variabel baru
void tukar() {
    int a = 10;
    int b = 20;
    printf("a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d", a, b);
}

int main() {
    tukar();
    return 0;
}