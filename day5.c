#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);



int main()
{
	int n = parse_int(ltrim(rtrim(readline())));
	int i = 1;
	for (; i < 11; i++)
	{
		printf("%d x %d = %d\n",n, i, (n*i));
	}

	return 0;
}
