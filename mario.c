#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,a;
    LOOP:printf("height:");
    scanf("%d",&a);
    if(a>=1 && a<=8)
    {
        for(i=1;i<=a;i++)
        {
          for(j=1;j<=a-i;j++)
          {
              printf(" ");
          }
          for(k=1;k<=i;k++)
          {
              printf("#");
          }
          printf(" ");
          for(l=1;l<=i;l++)
          {
              printf("#");
          }

          printf("\n");
        }
    }
    else
    {
        goto LOOP;
    }
    return 0;
}
