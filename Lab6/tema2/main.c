#include <stdio.h>
#include <stdlib.h>

int readChecker(int nr1, int nr2){

    if(nr1==-1 && nr2==-1)
        return -1;
    return 1;

}

int main()
{
    int b,m,n;
    int numbers[1005],x[1005],y[1005];
    int iterator1=0,iterator2=0,counter,aux1,aux2;

    scanf("%d %d %d", &b, &m, &n);

    scanf("%d", &aux1);
    while(aux1>0){

            numbers[iterator1]=aux1;
            scanf("%d",&aux1);
            iterator1++;
    }
    /*for(counter=0;counter<iterator1;counter++)
        printf("%d ",numbers[counter]);*/

    scanf("%d %d", &aux1, &aux2);
    while(readChecker(aux1,aux2)!=-1){

        x[iterator2]=aux1;
        y[iterator2]=aux2;
        scanf("%d %d",&aux1, &aux2);
        iterator2++;
    }
    /*for(counter=0;counter<iterator2;counter++)
        printf("%d %d \n",x[counter],y[counter]);*/



    return 0;
}
