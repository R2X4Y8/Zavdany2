#ifndef SUMMEL_C
#define SUMMEL_C
#include <math.h>

int summel(double *mass, int n)
{
	int u,i,sumofmodules=0;
    for (i = 0; i < n; i++) 
	{
      	if(u==1)
	   		sumofmodules+=fabs(mass[i]);
	   	
		if(mass[i]<0)
       		u=1;
    }
    return sumofmodules;
}

#endif
