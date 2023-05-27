/*Mengisi field dari variabel struktur kemudian menampilkannya*/

#include <stdio.h>
#include <string.h>

struct date {
    int month, day, year;
    };

struct student {
    char name [100];
    struct date birthday;
};

struct student mhs;
int main (){
    strcpy(mhs.name, "ANDI FARHAN SAPPEWALI");
    mhs.birthday.month = 9;
    mhs.birthday.day = 26;
    mhs.birthday.year = 2003;

    printf ("Name       : %s\n", mhs.name);
    printf ("Birthday   : %d - %d - %d\n\n", mhs.birthday.day, mhs.birthday.month, mhs.birthday.year);
}    


