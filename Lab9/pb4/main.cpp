#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int nrap(char v[100],char c[100],int e)
{
    int j,ok=0,i,t=1,y,nr=0;
    char *p,a[100][100];

    char exceptions[]=" ,.-?!";

    p=strtok(v,exceptions);
    while(p)
    {
        nr++;
        strcpy(a[nr],p);
        p=strtok(NULL,exceptions);
    }
    for(j=1;j<=nr;j++)
    {

    if( strlen(a[j])==e-1 || (strlen(a[j])==e && j==nr) )
	{

        t=1;
        y=e ;
        for(i=0;i<y;i++)
        if( c[i]>='A' && c[i]<='z'  && a[j][i]!=c[i])
            t=0;

        if(t)
		{
            ok++;
		}
	}
    }
    return ok;
}

int main()
{
    char a[100],b[100],c[100];
    int i;
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    for(i=0;i<strlen(b)-1;i++)
        c[i]=b[i];
    c[strlen(b)-1]=' ';
    printf("\n%d\n",nrap(a,c,strlen(b)));

return 0;
}
