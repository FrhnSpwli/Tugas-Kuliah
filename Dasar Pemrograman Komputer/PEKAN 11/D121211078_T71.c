#include <stdio.h>
#include <string.h>

struct record{
    int loop; 
    char word [5];
    float sum;
};

int main (){
    struct record sample;
        sample.loop = 10;
        strcpy (sample.word, "APPE");

printf("Isi dari struct sample.loop : %d\n", sample.loop);
printf("Isi dari struct sample.word : %s\n\n", sample.word);

return 0;
}
