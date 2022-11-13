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
char** split_string(char*);

int parse_int(char*);



int main()
{
	int i, j;
	int n = parse_int(ltrim(rtrim(readline())));

	char** arr_temp = split_string(rtrim(readline()));

	int* arr = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		int arr_item = parse_int(*(arr_temp + i));

		*(arr + i) = arr_item;
	}
    
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr[i]);
	}
    
	j = n - 1;
	while (j >= 0)
	{
		printf("%d ", arr[j]);
		j--;
	}
	return (0);
}
