//Nama : Andi Farhan Sappewali
//NIM  : D121211078

#include <stdio.h>

void countSort(int L[], int n){
    int nilaiMin = 1;
    int nilaiMax = 31;

    int count[31];
    int j = 0;
    int k = 0;

    for(int i = 0; i <= nilaiMax; ++i){
        count[i] = 0;
    }
    for(int i = 0; i < nilaiMax; i++){
        if (i == n) break;
        count[L[i]]++;
    }

    while (n > 0){
        while(count[j] != 0){
            L[k] = j;
            count[j]--;
            k++;
            n--;
        }
        j++;
    }
}

int main() {
    int n;
    printf("\nBanyaknya Data : ");
    scanf("%d", &n);

    int L[n];

    printf("\nNilai Minimum = 1 \nNilai Maximum = 30\n\n");
    for(int i = 0; i < n; i++){
        printf("Masukkan Data [%d]: ", i+1);
        scanf("%d", &L[i]);
    }
    countSort(L, n);
    
    printf("\nData setelah Count Sort : \n");

    for(int i = 0; i < n; i++) {
       printf("%d ", L[i]);
    }

    return 0;
}