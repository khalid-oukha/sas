#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <time.h>
int main()
{
    //makes rand function choose other number every time ze run the programe
    srand(time(NULL));
    int randomNum;
    randomNum=rand() %7;
    char* jour[]={"landi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};


    printf("jour de la somaine choisi : %s",jour[randomNum]);

=======
#include<time.h>
int main()
{

    srand(time(NULL));
    int randomNum = rand() %7;
    switch(randomNum)
    {
       case 1: printf("lundi");
            break;
       case 2: printf("mardi");
            break;
       case 3: printf("mercredi");
            break;
       case 4: printf("jeudi");
            break;
       case 5: printf("vendredi");
            break;
       case 6: printf("samedi");
            break;
       case 7: printf("dimanche");
            break;

    }
>>>>>>> 61c73ee0e666326613a02611d28beea78cf90244

    return 0;
}
