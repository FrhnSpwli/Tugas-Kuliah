#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAXVAL	100

main(int argc, char *argv[])
{
	double d[MAXVAL];
	double *pd = d;

	while (--argc) {
		if (isdigit(**++argv))
			*pd++ = atof(*argv);
		else if (*argv[0] == '-') {
			pd -= 2;
			*pd = *pd - *(pd+1);
			++pd;
		}
		else if (*argv[0] == '/') {
			pd -= 2;
			*pd = *pd / *(pd+1);
			++pd;
		}
		else if (*argv[0] == '*') {
			pd -= 2;
			*pd = *pd * *(pd+1);
			++pd;
		}
		else if (*argv[0] == '+') {
			pd -= 2;
			*pd = *pd + *(pd+1);
			++pd;
		}
		else
			argc = 1;
	}
	printf("%f\n", *--pd);
	return 0;
}