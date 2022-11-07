#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	int i = 4;
	double d = 4.0;
	char s[] = "HackerRank ";

	/* Declare second integer, double, and String variables.*/
	int a;
	double b;
	char arr[200];

	/* Read and save an integer, double, and String to your variables.*/
	scanf("%d %lf %[^\n]s", &a, &b, arr);
	/* Print the sum of both integer variables on a new line.*/
	printf("%d", a + i);
	/* Print the sum of the double variables on a new line.*/
	printf("\n%.01f", d + b);
	/* Concatenate and print the String variables on a new line*/
	printf("\n%s", s);
	printf("%s", arr);
	/* The 's' variable above should be printed first.*/

	return (0);
}
