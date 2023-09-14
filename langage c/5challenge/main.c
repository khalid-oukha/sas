#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Challenge 5 : Distance entre deux points
    int x1,y1,x2,y2,mn;
    printf("entrez  x1 :");
    scanf("%d",&x1);
    printf("entrez  y1 :");
    scanf("%d",&y1);
    printf("entrez  x2 :");
    scanf("%d",&x2);
    printf("entrez  y2 :");
    scanf("%d",&y2);
    mn=sqrt((pow((x2-x1),2))+pow((y2-y1),2));
    printf("la distance entre M et N est mn = %d:",mn);
    return 0;
}
