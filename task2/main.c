#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	char c[50];
	printf("Enter text to translate :");
	fgets(c, sizeof(c), stdin);
	printf("\nChar: ");
	puts(c);
	lower(c);
	printf("\nLower text: ");
	puts(c);
	upper(c);
	printf("\nUpper text: ");
	puts(c);	
	return 0;
}
