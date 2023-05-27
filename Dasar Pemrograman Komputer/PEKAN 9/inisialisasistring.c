#include<stdio.h>

void bentuk1(void);
void bentuk2(void);

int main(){
    bentuk1();
    bentuk2();
}

void bentuk1(void){
    char kompiler_c[] =
    {'V', 'i', 's', 'u', 'a', 'l', ' ', 'C', '+', '+', '\0'};
    puts(kompiler_c);
}

void bentuk2(void){
    char kompiler_c[] =
    {"Visual C++"};
    printf("%s\n", kompiler_c);
}
