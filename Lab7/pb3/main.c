#include <stdio.h>
#include <math.h>

#define JUMP    0.1
int cont=1;

void print(double (*function)(double), double min, double max, double step)
{

	float i;
    if(cont==1)
        for (i=min;i<max;i+=step) {
            printf("sin(%.3lf) = %.3lf\n", i, function(i));
        }
    if(cont==2)
        for (i=min;i<max;i+=step) {
            printf("cos(%.3lf) = %.3lf\n", i, function(i));
        }
    if(cont==3)
        for (i=min;i<max;i+=step) {
            printf("sqrt(%.3lf) = %.3lf\n",i, function(i));
        }
    if(cont==4)
        for (i=min;i<max;i+=step) {
            printf("tan(%.3lf) = %.3lf\n",i,function(i));
        }
    if(cont==5)
        for (i=min; i< max; i+= step) {
            printf("exp(%.3lf) = %.3lf\n",i,function(i));
        }
    if(cont==6)
        for (i=min;i<max;i+=step) {
            printf("log(%.3lf) = %.3lf\n", i, function(i));
        }
	cont++;
}


int main()
{
	printf(sin, 1.0, 10.0, JUMP);

	printf(cos, 1.0, 10.0, JUMP);

	printf(sqrt, 1.0, 10.0, JUMP);

	printf(tan, 1.0, 10.0, JUMP);

	printf(exp, 1.0, 10.0, JUMP);

	printf(log, 1.0, 10.0, JUMP);


	return 0;
}
