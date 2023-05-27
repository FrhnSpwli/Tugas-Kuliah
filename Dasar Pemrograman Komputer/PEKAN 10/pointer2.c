#include <stdio.h>

main(){
    int *pu;
    int nu;
    int u = 1234;

    pu = &u;
    nu = *pu;

    printf("Alamat dari u   = %p\n", &u);
    printf("Isi pu          = %p\n", pu);
    printf("Isi u           = %d\n", u);
    printf("Nilai yang ditunjuk pu  = %d\n", *pu);
    printf("Nilai nu        = %d\n", nu);
}