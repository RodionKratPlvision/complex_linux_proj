#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	int number;
	printf("Enter the number to choose which operation to perform\n");
	printf("1. Sum\n");
	printf("2. Difference\n");
	printf("3. Product\n");
	printf("4. Division\n");
	printf("5. Factorial\n");
	printf("6. Square root\n");
	scanf("%d", &number);
	printf("You %d", number);
	printf("\n");
	switch(number)
	{
		case 1: 
			{
			int a;
			int b;
			printf("Sum \n Enter first number: ");
                        scanf("%d", &a);
			printf("\n Enter second number: ");
                        scanf("%d", &b);
			printf("\n %i + %i = %i", a, b, add(a, b));
			break;
			}
		case 2:
			{
			int a;
			int b;
			printf("Difference \n Enter first number: ");
			scanf("%i", &a);
			printf("\n Enter second number: ");
			scanf("%i", &b);
			printf("\n %i - %i = %i", a, b, difference(a, b));
			break;
					
			}
		case 3:
			{
			int a;
			int b;
			printf("Product \n Enter first number: ");
			scanf("%i", &a);
			printf("\n Enter second number: ");
			scanf("%i", &b);
			printf("\n %i * %i = %i", a, b, product(a, b));
			break;
			}
		case 4:
			{
			float a;
			float b;
			printf("Division \n Enter first number: ");
			scanf("%f", &a);
			printf("\n Enter second number: ");
			scanf("%f", &b);
			if (b == 0) 
			{
				printf("\nDivision by error!!!\n");
				return 0;
			}
			float value = fraction(a, b);
			printf("\n %.2f / %.2f = %.2f", a, b, value);
			break;
			}
		case 5:
			{
			int a;
			printf("Factorial \n Enter number: ");
			scanf("%i", &a);
			printf("\n Factorial of %i = %i", a, fact(a));
			break;
			}
		case 6:
			{
			double a;
			printf("Square root \n Enter number: ");
			scanf("%lf", &a);
			if (a < 0.0)
			{
				printf("\nRoot of a negative number!!! \n");
				return 0;
			}
			double value = square_root(a);
			printf("\n Square root of %.2f =  %lf", a, value);
			break;
			}
	}
	printf("\n");
	return 0;
}


