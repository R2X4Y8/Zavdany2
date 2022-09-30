#ifndef FILLING_C
#define FILLING_C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void filling(double *mass, int n)
{
	srand(time(NULL));
	int i,p;
	float temp;
	printf("\n\n[ ");
	for(i = 0; i < n; i++)
	{
		temp = (float)random()/2000000 - 100;
		p = random();
		if (p % 2 == 0) 
			mass[i] = temp;
		else 
			mass[i] = -1 * temp;
			
		printf("( %.2f ) ",mass[i]);
	}
      printf("]\n\n");
}

#endif
