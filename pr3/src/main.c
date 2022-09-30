#include <stdio.h>
#include <stdlib.h>
#include "filling.h"
#include "amountelement.h"
#include "summel.h"

int main(int argc, char* argv[])
{
	int n;
	while(1)
	{
		printf("\nEnter the number of elements in the array: ");
		scanf("%d",&n);
		if (n < 1) 
			printf ("Error! The array size is less than 1\n");
		else
			break;
	}
	
	double mass[n];
	
	filling(&mass,n);
	
	int amount = amountelement(&mass, n);
	int sumofmodules = summel(&mass, n);
	
	printf("\nNumber of elements > average: %d\n",amount);
	printf("\nSum of modules: %d\n\n",sumofmodules);
	
return 0;
}

