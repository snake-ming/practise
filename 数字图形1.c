#include <stdio.h>
#include <string.h>
#define m 4
#define n 4
void main()
{
    int i,j,b,a[m][n];
    memset(a,0,sizeof(a));
      b=0;
    for (i=0;i<4;i++)
    {
        for (j=0;j<i+1;j++)
        {
        a[i][j]=b+1;
        printf("%d ",a[i][j]);
        b++;
        }
        printf("\n");
    }
}
