#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n, x, min, i;

    scanf("%d", &n);
    scanf("%d", &min);

    for (i=1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x < min)
        {
            min = x;
        }
    }

    printf("Angka terkecil adalah %d", x);
    return 0;
}
