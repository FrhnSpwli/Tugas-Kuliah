#include <stdio.h>
#include <stdlib.h>


int main() {
    char *kalimat = malloc(sizeof(char) * 255); // digunakan memory allocation agar pointer ini dapat dirubah isinya

    printf("Masukkan kalimat: ");
    gets(kalimat); // menerima input
    
    // mencetak huruf ketiga dari pointer, dengan asumsi tanda baca dan spasi dihitung
    printf("Huruf ketiga dari string: %c\n", kalimat[2]);

    free(kalimat); // menghapus memory yang digunakan pointer
    return 0;
}