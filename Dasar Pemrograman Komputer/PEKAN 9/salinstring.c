#include <stdio.h>

int main(){
    int i=0;
    char asal[]="Saya menyukai teknik informatika";
    char hasil[50];
//1
    // while (asal[i] != '\0'){
    //     hasil[i] = asal[i];
    //     i++;
    // }
//2
    // while(hasil[i] = asal[i])
    //     i++;

    hasil[i] = '\0';
    printf("Isi hasil: %s\n", hasil);
}

//jika mau pake #include <string.h>

// #include <stdio.h>
// #include <string.h>

// main(){
//     char str1[80];
//     char str2[]="Saya suka teknik informatika";

//     strcpy(str1, str2); //menyalin isi str1 ke str2
//     printf("String pertama adalah : %s\n", str1);
//     printf("String kedua adalah : %s\n", str2);
// }