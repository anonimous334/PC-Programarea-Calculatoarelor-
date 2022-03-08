#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float a,b,c,delta,r1,r2;
	scanf("%f %f %f",&a,&b,&c);
	delta=b*b-4*a*c;
	if(delta<0)
		printf("ECUATIA NU ARE RADACINI REALE \n");
	if(delta==0)
		printf("ECUATIA ARE O SINGURA RADACINA EGALA CU %f \n",(-1)*b/a);
	if(delta>0)
	{
		r1=((-1)*b + sqrt(delta))/(2*a);
		r2=((-1)*b - sqrt(delta))/(2*a);
		printf("ECUATIA ARE DOUA RADACINI REALE %f SI %f",r1,r2);
	}
	return 0;	
}

