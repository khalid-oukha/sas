#include <stdio.h>
#include <stdlib.h>

int main()
{
<<<<<<< HEAD

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

=======
    int num;
    printf("entrez un nombre :\n");
    scanf("%d",&num);
    //Challenge 1: table de multiplication
    for(int i=0;i<11;i++){
        printf("%d * %d = %d \n",num,i,num*i);
    }
>>>>>>> 61c73ee0e666326613a02611d28beea78cf90244
    return 0;
}
