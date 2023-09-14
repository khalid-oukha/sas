#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 1 : Paire ou Impaire
    int num;
    printf("entrez un nombre :");
    scanf("%d",&num);

    if(num%2==0){
        printf("nombre %d paire ",num);

    }
    else{
        printf("nombre %d impaire ",num);
    }
    return 0;
}
