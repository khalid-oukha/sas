#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,cpt;
    printf("entrez un nombre : ");
    scanf("%d",&num);


    if(num<=1){
     printf("non premier");
 }
 else{

    for (int i=2;i<num-1;i++){

            if(num % i == 0)
                {
                    cpt=0;
                }
    }
    if(cpt==0){
            printf("non premier");
        }
    else{
            printf("premier");
        }
 }

    return 0;
}
