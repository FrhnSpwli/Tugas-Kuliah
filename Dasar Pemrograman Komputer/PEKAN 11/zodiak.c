#include <stdio.h>

main (){
    struct zodiak {
        char nama [100];
        int tgl1, tgl2, bln1, bln2;
    };

    static struct zodiak bintang =
    {
        "Sagitarius", 22, 26, 1, 12
    };

    int tgl_lhr, bln_lhr, thn_lhr;

    printf("Masukkan tanggal lahir Anda : ");
    scanf("%d-%d-%d", &tgl_lhr, &bln_lhr, &thn_lhr);

    if ((tgl_lhr >= bintang.tgl1 && bln_lhr == bintang.bln1)
         || (tgl_lhr <= bintang.tgl2 && bln_lhr == bintang.bln2))
        printf("Zodiak Anda adalah %s\n", bintang.nama);
    else
        printf("Bintang Anda bukan %s\n", bintang.nama);    
}