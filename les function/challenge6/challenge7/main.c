#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
bool challenge7(int num)
{

    if(num<=1)
    {
        return false;
        printf(" non premier ");
    }
    else
    {

        for (int i=2; i<num; i++)
        {



            if( num%(i+1)==0 || num%i==0 )
            {
                return false;

                break;

            }
            else
            {
                return true;

            }

        }



    }

}
int main()
{
    int num;
    printf("entrez un nombre :\n");
    scanf("%d",&num);


    if(challenge7(num)==true){
            printf("premier");
    }else{
        printf("non premier");
    }

    return 0;
}
