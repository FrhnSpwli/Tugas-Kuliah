#include <stdio.h>
/*i
Menghitung diskriminan pers. kuadrat ax^2 + bx + c = 0
*/
main (){
    float a,b,c,d;
    a = 3.0;
    b = 4.0;
    c = 7.0;

    d = b*b-4*a*c;
    printf("Diskriminan = %f\n", d);
}
