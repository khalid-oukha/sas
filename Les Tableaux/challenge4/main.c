#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrnote;
    printf("-----nombre des notes :");
    scanf("%d",&nbrnote);
    float sum=0,moyenne;
    int egal=0,inf=0,sup=0;
    float notes[nbrnote];
    int count=sizeof(notes)/sizeof(float);


    for(int i=0; i<nbrnote; i++)
    {
        printf("-----entrez la note %d :",i+1);
        scanf("%f",&notes[i]);

        if(notes[i]<0 || notes[i]>20)
        {
            return 0;

        }

        sum=sum+notes[i];

    }

    moyenne=sum/count;


    //affichage
    for(int i=0; i<nbrnote; i++)
    {
        if(notes[i]<moyenne)
        {
            printf("\n la note %d : %.2f  inférieur a la moyenne",i+1,notes[i]);
            inf++;
        }
        else if(notes[i]>moyenne)
        {

            printf("\n la note %d : %.2f supérieur  a la moyenne",i+1,notes[i]);
            sup++;

        }
        else
        {

            printf("\n la note %d : %.2f egal  a la moyenne",i+1,notes[i]);
            egal++;
        }

    }
    float max=notes[0],min=notes[0];
    //max est min
    for(int i=0; i<nbrnote; i++)
    {
        if(min>notes[i])
        {
            min=notes[i];

        }
        else if(max<notes[i])
        {
            max=notes[i];
        }
    }

    //numbre des notes saisies
    printf("\n numbre des notes saisies : %d",count);

    //la somme est la moyenne :
    printf("\n la somme  : %.2f \t la moyenne : %.2f",sum,moyenne);

    //egal suprieur infrieur
    printf("\n nombre des notes inférieur a la moyenne : %d ",inf);
    printf("\n nombre des notes supérieur  a la moyenne : %d ",sup);
    printf("\n nombre des notes égal a la moyenne : %d ",egal);

    //max min

    printf("\n min  : %.2f \t max : %.2f",min,max);

    return 0;
}
