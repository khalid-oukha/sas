#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("entrez un nombre : ");
    scanf("%d",&num);

    if(num==1 || num<1){
        printf(" non premier ");
    }
    else{

          for (int i=2;i<num;i++){



            if( num%(i+1)==0 || num%i==0 )
                {
                        printf(" non premier ");
                        break;

                }
            else
                {
                         printf("premier");
                         break;

                }

    }



    }


    return 0;
}
