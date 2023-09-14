#include <stdio.h>
#include <stdlib.h>

int main()
{
    char var;
    printf("Press any key to continue: \n");
    scanf("%c",&var);
    if((var >= 'a' && var>='z') || (var >= 'A' && var>='Z'))
    {
         printf("partie des alphabets \n");
         if(var>=65 && var<=90)
        {
                printf("%c alphabet majuscule. \n",var);
        }
        else{
                printf("%c alphabet minuscule",var);
        }
    }
    else{
        printf(" its not an alphabet ");
    }
    return 0;
}
