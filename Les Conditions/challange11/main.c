#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    //makes rand function choose other number every time ze run the programe
    srand(time(NULL));
    int randomNum;
    randomNum=rand() %7;
    char* jour[]={"landi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};


    printf("jour de la somaine choisi : %s",jour[randomNum]);


    return 0;
}
