#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moy;
    printf("entrez moyenne  \n");
    scanf("%d",&moy);

    if(moy < 10){
        printf("mention passable \n");
    }
    else if(moy>=10 && moy<12){
        printf("passable \n");
    }
    else if(moy>=12 && moy<14)
        {
        printf("assez bien \n");
    }
    else if(moy>=14 && moy<16)
        {
        printf(" bien  \n");
    }
    else if(moy>=16){
         printf("très bien  \n");
    }
    return 0;
}
