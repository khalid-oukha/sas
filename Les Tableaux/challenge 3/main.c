#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 4,stock;
    int t[N];

    printf(" donner %d nombres : \t", N);

    //Initialiser le tableau

    for( int i=0; i<N; i++)
    {
        scanf("%d",&t[i]);

    }
    for( int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            if(t[i]<t[j])
            {
                stock=t[j] ;
                t[j]=t[i];
                t[i]=stock;
            }
        }
            printf("\t %d",t[i]);

    }



    return 0;
}
