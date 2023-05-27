#include <stdio.h>

int main() {
    FILE* teks = fopen("Teks.bin", "wb");
    char kar;
    scanf("%c", &kar);
    while(kar != '\n') {
        fwrite(&kar, sizeof(char), 1, teks);
        scanf("%c", &kar);
    }
    fclose(teks);
    return 0;
}