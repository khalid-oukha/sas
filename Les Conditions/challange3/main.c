#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum;
    printf("entrez un nombre a :");
    scanf("%d",&a);
    printf("entrez un nombre a :");
    scanf("%d",&b);
    if(a==b)
    {
        sum=a*3;
        printf("triple =%d",sum);
    }
    else{
        sum=a+b;
        printf(" %d + %d =%d",a,b,sum);
    }

    return 0;
}
