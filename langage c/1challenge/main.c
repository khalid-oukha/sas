#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20];
    char prenom[20];
    char sexe[20];
    int age;
    int telephone;

     printf("votre nom est :  ");
        scanf("%s", &nom);
     printf("votre prenom est :  ");
        scanf("%s", &prenom);
     printf("votre sexe est :  ");
        scanf("%s", &sexe);
     printf("votre age est : ");
        scanf("%d",&age);
     printf("votre telephone est : ");
        scanf("%d",&telephone);

     printf("------------------votre information personnelle est :----------------------\n");
     printf(" nome : %s\n prenom : %s\n sexe :%s\n age :%d\n telephone :%d\n ",nom,prenom,sexe,age,telephone);
    return 0;
}
