#include <stdio.h>
#include <string.h>
#define MAX 100

int main (){
    //nomor 1
    int kapital=0, nonkapital=0, spasi=0, kata=1;
    char kalimat[MAX];
    printf("Masukkan kalimat anda: ");
    gets(kalimat);
    
    for (int i = strlen(kalimat)-1; i >=0; i--)
        printf("%c", kalimat[i]);
    printf("\n");

    for(int i=0; i < strlen(kalimat); i++){
        if (kalimat[i]>='A' && kalimat[i]<='Z'){
            kapital++;
        }
        if (kalimat[i]>='a' && kalimat[i] <='z'){
            nonkapital++;
        }
        if (kalimat[i]==' '){
            spasi++;
            kata++;
        }
    }

    for(int i=0; i < strlen(kalimat); i++){
        printf("%c", kalimat[i]);
        if(kalimat[i] == ' ')
            printf("\n");
    }
    
    for(int i = 0; i < strlen(kalimat); i++){
        if (kalimat[i] >= 'a' && kalimat[i] <= 'z'){
            kalimat[i] = kalimat[i] - 32;
        }
        printf("%c", kalimat);
    }

    printf("\n%s\n", kalimat);
    printf("%d\n", kapital);
    printf("%d\n", nonkapital);
    printf("%d\n", spasi);
    printf("%d\n", kata);

    return 0;
}