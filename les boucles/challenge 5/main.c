#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rev=0,mod;
    printf("entrez un nomber :\n");
    scanf("%d",&num);

    while(num!=0){
        mod=num%10;
        rev=rev*10 + mod;
        num=num/10;
    }
    printf("%d  ",rev);
    return 0;
}
