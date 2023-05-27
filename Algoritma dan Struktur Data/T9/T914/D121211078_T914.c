#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void KataTepanjang(FILE* teks, char* kata) {
    char* kataTemp = malloc(100);
    char kar;
    int count = 0, countTemp = 0;
    strcpy(kataTemp, "");
    printf("Isi Teks: \n");
    fread(&kar, sizeof(char), 1, teks);
    while(!feof(teks)) {
        printf("%c", kar);
        if(kar != ' ' && kar != '\n'){
            strncat(kataTemp, &kar, 1);
            countTemp = countTemp + 1;
        } 
        else {
            strcpy(kataTemp, "");
            countTemp = 0;
        }
        if (count < countTemp){
            strcpy(kata, kataTemp);
            count = countTemp;
        }
        fread(&kar, sizeof(char), 1, teks);
    }
    free(kataTemp);
}

int main() {
    char* kata = malloc(100);
    FILE *teks = fopen("Teks.bin", "rb");
    strcpy(kata, "");
    KataTepanjang(teks, kata);
    fclose(teks);
    printf("\nKata Terpanjang: %s\n", kata);
    free(kata);
    return 0;
}