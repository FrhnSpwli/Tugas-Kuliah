#include <stdio.h>

struct date{
    int day, month, year;
};

struct student{
    char name[100];
    struct date birthday; 
};

struct student data_mhs[100];

main (){
    int i = 0, sudah_benar, jml;
    char lagi;

    do{
        printf("Nama        : ");
        fgets(data_mhs[i].name, sizeof data_mhs[i], stdin);

        printf("Birthday (dd-mm-yyyy) : ");
        scanf("%d-%d-%d", &data_mhs[i].birthday.day, &data_mhs[i].birthday.month,
        &data_mhs[i].birthday.year);

        printf("\n");

        i++;

        printf("Mau menambahkan data lagi [Y/N]");

        do{
            lagi = getchar();
            sudah_benar = (lagi == 'Y') || (lagi == 'y') || (lagi == 'T') || (lagi == 't');
        } while (!sudah_benar);

        fflush(stdin);
        printf("\n");
    } while ((lagi == 'Y') || (lagi == 'y'));
   
    jml = i;

    printf("DATA SISWA\n");
    for(i = 0; i < jml; i++);{
        printf("%d. Name        : %s\n", i+1, data_mhs[i].name);
        printf("Birthday        : %d-%d-%d\n\n", data_mhs[i].birthday.day, data_mhs[i].birthday.month, data_mhs[i].birthday.year);
    }
}