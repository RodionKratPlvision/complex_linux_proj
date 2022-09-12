#include <ctype.h>
#include "header.h"

void lower(char line[])
{	 
	for(int i = 0; line[i]; i++)
	{
		line[i] = tolower(line[i]);
	}
	return;

}
