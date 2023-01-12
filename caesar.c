#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("plaintext:");
    char word[100];
    gets(word);
    int i=0;
    while(word[i]!='\0')
    {
        word[i]=(word[i]+1);
        i++;
    }

        printf("ciphertext:%s",word);


    return 0;
}
