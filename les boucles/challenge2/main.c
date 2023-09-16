#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("entrez numbre des etoile :");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        for(int j=num; j>i; j--)
        {
            printf(" ");
        }


        for(int p=1; p<i*2; p++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
