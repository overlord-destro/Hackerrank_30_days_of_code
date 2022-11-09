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
	int N = parse_int(ltrim(rtrim(readline())));
	if (N % 2 != 0)
		printf("Weird");
	else if ((N % 2 == 0) && N >= 2 && N <= 5)
		printf("Not Weird");
	else if ((N % 2 == 0) && N >= 6 && N <= 20)
		printf("Weird");
	else if ((N % 2 == 0) && N >= 20)
		printf("Not Weird");

	return (0);
}
