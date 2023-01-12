#include <stdio.h>
#include <stdlib.h>

int main()
{
    char message[100];
    int order[7];
    printf("message:");
    gets(message);
    int remainder,section,i=0,j=0;
    while(message[i]!='\0')
    {
        section=message[i]/2;
        remainder=message[i]%2;
        order[j]=remainder;
        j++;
        while(section!=0)
        {
            remainder=section%2;
            order[j]=remainder;
            section=section/2;
            j++;
        }
        for(j=6;j>=0;j--)
        {
            printf("%d",order[j]);
        }
        printf("\n");
        i++;
        j=0;
    }

    return 0;
}
