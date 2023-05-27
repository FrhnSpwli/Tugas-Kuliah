#include <stdio.h>
#include <string.h>

int main (){
    int kapital = 0, nonkapital = 0, spasi = 0, kata = 1;
    char kalimat [1000];

    printf("Masukkan kalimat Anda: ");
    gets(kalimat);

    printf("\nJika dibalik akan menjadi = ");
    for(int i = strlen(kalimat)-1; i >= 0; i--)
        printf("%c", kalimat[i]);
    
    printf("\n\n");

    for(int i = 0; i < strlen(kalimat); i++){
        if(kalimat[i] >= 'A' && kalimat[i] <= 'Z')
            kapital++;
        if(kalimat[i] >= 'a' && kalimat[i] <= 'z')
            nonkapital++;
        if(kalimat[i] == ' '){
            spasi++;
            kata++;
        }
    }

    printf("Jika tiap katanya dipisahkan dengan baris baru maka bentuknya akan menjadi =\n");
    for(int i=0; i < strlen(kalimat); i++){
        printf("%c", kalimat[i]);
        if(kalimat[i] == ' ')
            printf("\n");
    }

    for(int i = 0; i <= strlen(kalimat); i++){
        if(kalimat[i] >= 'a' && kalimat[i] <= 'z')
            kalimat[i] = kalimat[i] - 32;
        printf("%c", kalimat);
    }

    printf("\n\nJika semua hurufnya dikapitalkan : %s\n\n", kalimat);
    printf("Jumlah huruf kapital di dalamnya : %d\n\n", kapital);
    printf("Jumlah huruf nonkapital di dalamnya : %d\n\n", nonkapital);
    printf("Jumlah spasi yang digunakan : %d\n\n", spasi);
    printf("Jumlah katanya sebanyak %d\n\n", kata);

    return 0;
}