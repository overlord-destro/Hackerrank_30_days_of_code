#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int a, b = 0, i, j;
	char arr[10000];

	//printf("\n\n please enter how many test cases\n");
	scanf("%d", &a);
	//printf("\nplease type test cases\n");
	while (b < a)
	{
		scanf("%s", arr);
		for (i = 0; i < strlen(arr); i += 2)
		{
			printf("%c", arr[i]);
		}

		printf(" ");

		for (j = 1; j < strlen(arr); j += 2)
		{
			printf("%c", arr[j]);
		}

		printf("\n");
		b++;
	}
	return 0;
}
