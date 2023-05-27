#include <stdio.h>
#include <string.h>

void balikElemen(char arr[]);

int main() {
    char arr[100];

    printf("Masukkan string: ");
    scanf("%s", &arr);

    balikElemen(arr);
}

void balikElemen(char arr[]) {
    char temp;
  
    temp = arr[0];
    arr[0] = arr[strlen(arr) - 1];
    arr[strlen(arr) - 1] = temp;

    printf("String setelah dibalik: %s\n", arr);
}