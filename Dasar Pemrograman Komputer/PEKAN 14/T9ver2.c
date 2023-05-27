#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXVAL 100
int sp = 0;
double val[MAXVAL];

void push(double f)
{
	if(sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

double pop(void)
{
	if(sp > 0)
		return val[--sp];
	else
	{
		printf("error: stack empty\n");
		return 0.0;
	}
}

int main(int argc, char *argv[])
{
	int i, c, op2;
	char *p;
	for(i = 1; i < argc; i++)
	{
		p = argv[i];
		printf("argv[%d] = %s\n", i, argv[i]);
		while(*p && isdigit(*p))
			p++;
		printf("*p = %d, %c\n", *p, *p);
		switch(*p)
		{
			case '\0':
				push(atoi(argv[i]));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case 'x':
				push(pop() * pop());
				break;
			case '/':
				op2 = pop();
				if(op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
		}
	}
	printf("Final result = %lf\n", pop());
	return 0;
}