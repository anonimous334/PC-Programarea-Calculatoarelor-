#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,flag1=0,flag2=0,flag3=0;
    char s[100],c[100];
    fgets(s,99,stdin);
    n=strlen(s);
    /*for(i=0;i<n2;i++)
        if(s[i]!=s[n-i-1] || s[i]-s[n-i-1]!=32 || s[n-i-1]-s[i]!=32)
            flag1=1;*/
    for(i=0;i<n-1;i++)
        c[i]=s[n-1-i];
    s[n-1]=NULL;
    flag1=strcmp(c,s);
    printf("%d",flag1);
    return 0;
}
