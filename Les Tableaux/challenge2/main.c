#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 10;
    int tab[N];
    int max,min;
    printf(" donner %d nombres : \t", N);

    //Initialiser le tableau

    for( int i=0; i<N; i++)
    {
        scanf("%d",&tab[i]);

    }
    //valuer par difault pour max et min
    max=tab[0];
    min=tab[0];

    //affichage tableau

    for( int i=0; i<N; i++)
    {
        printf("\t %d",tab[i]);

        if(tab[i]>max)
        {
            max=tab[i];
        }
        if(tab[i]<min)
        {
            min=tab[i];
        }

    }

    //affichage
    printf("\t \n max : %d ",max);
    printf("\t \n mix : %d ",min);
    return 0;
}
