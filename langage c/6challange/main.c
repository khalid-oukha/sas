#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 6 : Circonférence d'un cercle
    float r,c;
    const float p=3.14;
    printf("entrez le rayon :");
    scanf("%f",&r);
    c= 2*p*r;
    printf("la circonference du cercle = %.2f",c);

    return 0;
}
