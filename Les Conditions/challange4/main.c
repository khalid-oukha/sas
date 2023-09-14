#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,dis=0;
    float x,x1,x2;
    printf("ax^2 + bx + c \n");
    printf("entrez un nombre a :");
    scanf("%d",&a);
    printf("entrez un nombre b :");
    scanf("%d",&b);
    printf("entrez un nombre c :");
    scanf("%d",&c);

    dis=(pow(b,2))-(4*a*c);
    printf("dis = %d : \n",dis);

    if(dis<0){
        printf("il n'y a pas de solution reelle ");
    }
    else if(dis==0){
         x = -(b / (2*a)) ;
         printf("x = %.2f",x);
    }
    else if(dis>0){
         printf("il y a deux solutions reelles : \n ");

         x1 = (-b - sqrt(dis)) / (2*a);
         x2 = (-b + sqrt(dis)) / (2*a);
         printf("x1 = % .2f x2 = %.2f",x1,x2);

    }
    return 0;
}
