#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 5 : Programme guidé par menu pour convertir l'année
    int anne,choix;
    printf("entrez un anne :");
    scanf("%d",&anne);
    printf("------------------------ menu------------------------ \n:");
    printf("1 -- convert to months \n:");
    printf("2 -- convert to days \n:");
    printf("3 -- convert to hours \n:");
    printf("4 -- convert to minutes \n:");
    printf("5 -- convert to seconds \n\n:");
    printf("---------------- choose from the menu----------------------- \n:");
    scanf("%d",&choix);

    switch (choix)
    {
case 1 :
    printf("%d year = %d month",&anne,anne*12);
    break;
    case 2 :
    printf("%d year = %d days",&anne,anne*12*30);
    break;
    case 3 :
    printf("%d year = %d hours",&anne,anne*12*30*24);
    break;
    case 4 :
    printf("%d year = %d minute",&anne,anne*12*30*24*60);
    break;
    case 5 :
    printf("%d year = %d second",&anne,anne*12*30*24*60*60);
    break;
    default :
        printf("error");
        break;
    }
    return 0;
}
