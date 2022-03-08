#include <stdio.h>
#include <math.h>
int main()
{
        float n1,n2;
        scanf("%f %f",&n1,&n2);
        if(fabs(n1)>=fabs(n2))
        {
                printf("Maximul conform fabs e:%.2f \n",n1 );
                printf("Minimul conform fabs e:%.2f",n2 );
        }
        else
        {
                printf("Maximul conform fabs e:%.2f \n",n2 );
                printf("Minimul conform fabs e:%.2f",n1 );
        
        }
        return 0;
}
