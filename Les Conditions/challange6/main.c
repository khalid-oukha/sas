#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("entrez un nomber : \n");
    scanf("%d",&num);
    if(num>0){
        printf(" %d postive \n",num);
    }
    else if(num<0){
        printf(" %d negatif \n",num);
    }
    else{
        printf(" %d nul \n",num);
      }

    return 0;
}
