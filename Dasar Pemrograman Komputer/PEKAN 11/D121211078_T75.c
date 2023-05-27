#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int main(){
    struct date sappe[5];

    for (int i = 0; i < 5; i++){
        printf("Masukkan data ke-%d: ", i+1);
        scanf("%d-%d-%d", &sappe[i].day, &sappe[i].month, &sappe[i].year);
    }

    printf("\n");

    for (int i = 0; i < 5; i++){
        printf("Data ke-%d : ", i+1);
        printf("%4d-%4d-%4d\n", sappe[i].day, sappe[i].month, sappe[i].year);
    }
    
    printf("\n");

    return 0;
}