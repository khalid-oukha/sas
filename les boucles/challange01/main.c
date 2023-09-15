#include <stdio.h>
#include <stdlib.h>

int main()
{

   for(int i=1;i<=9;i++)
    {

        for(int j=9;j>=i;j--)
            {
            printf(" ");
        }

        for(int c=1;c<=i;c++)
            {
            printf("*");

        }

        printf("\n");
   }

    return 0;
}
