#include <stdio.h>
#include <stdlib.h>

int main()
{


    int num;
    printf("entrez un nombre :\n");
    scanf("%d",&num);
    //Challenge 1: table de multiplication
    for(int i=0;i<11;i++){
        printf("%d * %d = %d \n",num,i,num*i);
    }

    return 0;
}
