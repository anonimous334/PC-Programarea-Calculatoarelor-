#include <stdio.h>

int ma1[10][10], ma2[10][10], mul[10][10];
void citire_matrice1(int m, int n){

int c,d;
for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &ma1[c][d]);

}
void citire_matrice2(int p, int q){
int c,d;
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &ma2[c][d]);
}

void inmultire(int m, int n, int p, int q){

   int c,d,k,sum=0;

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + ma1[c][k]*ma2[k][d];
        }

        mul[c][d] = sum;
        sum = 0;
      }
    }


}
int main()
{

  int m, n, p, q, c, d, k;
  printf("Numar de linii si coloane prima matrice:");
  scanf("%d%d", &m, &n);
  printf("Elementele primei matrice:\n");

  citire_matrice1(m,n);

  printf("Numar linii si coloane a doua matrice:");
  scanf("%d%d", &p, &q);

  if (n != p)
    printf("Matricele nu se pot inmulti\n");
  else
  {
    printf("Elementele celei de-a doua matrice:\n");

    citire_matrice2(p,q);

    inmultire(m,n,p,q);

    printf("Produsul matricelor este:\n");

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", mul[c][d]);

      printf("\n");
    }
  }

  return 0;
}
