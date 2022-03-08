#include <stdio.h>
int revnum(int x)
{
        if(x>0)
        {
                printf("%d",x%10);
                return revnum(x/10);
        }
	else
	return 0;
}

int main()
{
        int a;
        scanf("%d",&a);
        revnum(a);
}

