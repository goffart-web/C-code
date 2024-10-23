#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 5,j;
	j = i++; // Post-Increment
	j = i;
	printf("i = %d, j = %d",i,j);

    return 0;
}
