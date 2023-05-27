# include <stdio.h>

int billy [] = {10, 20, 120, 40, 2000, 100};

int n, result=0;

int main ()

{

     for (n=0; n<5; n++)

    { result += billy[n]; }

    printf ("%d", result);

    return 0;

}