#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 4 : Moyenne et somme de 4 nombres
    int a,b,c,d;
    float sum;
    printf("entrez  nombre a :");
    scanf("%d",&a);
    printf("entrez  nombre b :");
    scanf("%d",&b);
    printf("entrez  nombre c :");
    scanf("%d",&c);
    printf("entrez  nombre d :");
    scanf("%d",&d);
    sum=a+b+c+d;
    printf(" %d + %d + %d +%d = %.2f : \n",a,b,c,d,sum);
    printf(" moyenne = %.2f : \n",sum/4);
    return 0;
}
