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

double parse_double(char*);
int parse_int(char*);

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent)
{
	double tax, tip, result, result2;
    
	tip = (tip_percent/100.0) * meal_cost;
	tax = (tax_percent/100.0) * meal_cost;
	result = meal_cost + tip + tax;
	result2 = round(result);
	printf("%d", (int)result2);    
    
    
}

