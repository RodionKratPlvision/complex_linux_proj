#include <stdio.h>
#include <ctype.h>
#include "header.h"

void upper(char line[]){
	for(int i = 0; line[i]; i++)
	{
		line[i] = toupper(line[i]);
	}
	return;

}
