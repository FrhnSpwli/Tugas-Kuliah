#include <stdio.h>
#include <string.h>

int main (){
    char kalimat [1000], kalimat1 [1000];
    int banding;

    printf("\nMasukkan kalimat Anda: ");
    gets(kalimat);

    printf("Jika dibalik akan menjadi = ");
    for(int i = strlen(kalimat)-1; i >= 0; i--){
        printf("%c", kalimat[i]);
    }

    for(int i = 0; i <= strlen(kalimat); i++){
        if(kalimat[i] >= 'A' && kalimat[i] <= 'Z')
            kalimat[i] = kalimat[i] + 32;
    }

    for(int i = 0; i < strlen(kalimat); i++)
        kalimat1[i] = kalimat[strlen(kalimat)-i-1];
  
    banding = strcmp(kalimat, kalimat1);

    if(banding == 0)
        printf("\n%s merupakan polindrom\n\n", kalimat);
    else
        printf("\n%s merupakan bukan polindrom\n\n", kalimat);

    return 0;
}