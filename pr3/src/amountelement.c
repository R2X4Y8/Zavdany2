#ifndef AMOUNTELEMENT_C
#define AMOUNTELEMENT_C

int amountelement(double *mass, int n)
{
	int i,amount=0;
	float sum=0;
    for (i = 0; i < n; i++) 
        sum += mass[i]; 
    
    float ave = sum/n; 
    
    for (i = 0; i < n; i++) 
       if(mass[i]>ave)
	   	amount++;
	   
    return amount;
}

#endif
