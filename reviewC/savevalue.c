#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *numptr;
	numptr = malloc(sizeof(int));
	*numptr = 10;
	printf("%d\n", *numptr);
	free(numptr);
}