#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{

    srand(time(NULL));
    char jour[][]={"lundi","m","mercredi","jeudi","vendredi","samedi","dimanch"};
    //int randomNum = rand() %7;
    printf("jour de la smaine choisi : %s",*jour[1]);
    return 0;
}
