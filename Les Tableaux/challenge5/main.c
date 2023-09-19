#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];
    printf("entrez votre nom :");
    scanf("%s",&name);
    int i=0;

    while(name[i]!='\0')
    {
        i++;
    }
    printf("nombre de caracter %d",i);
    return 0;
}
