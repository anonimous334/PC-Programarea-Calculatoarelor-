#include <stdio.h>

int n,sum,i,j,k;
int ma[10][10], aux[10][10],rez[10][10];
int putere;

void citire_matrice(){
    for(i=1; i<=n;i++)
        for(j=1;j<=n;j++){
            scanf("%d",&ma[i][j]);
            aux[i][j]=ma[i][j];
            }
}
void inmultire(){
    sum=0;
    while(putere>1){
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            {
            for(k=1;k<=n;k++)
                sum+=ma[i][k]*aux[k][j];
            }
            rez[i][j]=sum;
            sum=0;
        }
    putere--;
    }

}
int main()
{

    scanf("%d", &n);
    citire_matrice();
    scanf("%d", &putere);
    inmultire();
    printf("RIDICARE LA PUTERE:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            printf("%d \t",rez[i][j]);

        printf("\n");
        }
    return 0;
}
