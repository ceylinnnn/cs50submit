#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    LOOP:printf("change owed:");
    scanf("%d",&a);
    if(!(a>0))
    {
        goto LOOP;
    }


    int quarters=0,dimes=0,nickels=0,pennies=0;
    while(a>=25)
    {
        a=a-25;
        quarters++;
    }
     while(a>=10)
    {
        a=a-10;
        dimes++;
    }
     while(a>=5)
    {
        a=a-5;
        nickels++;
    }
     while(a>=1)
    {
        a=a-1;
        pennies++;
    }
    int toplam;
    toplam=quarters+dimes+nickels+pennies;
    printf("%d",toplam);
    return 0;
}
