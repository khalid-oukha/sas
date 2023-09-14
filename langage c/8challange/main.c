#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("entrez un nombre : ");
    scanf("%d",&number);
    printf("valeur  en octal : %o\n", number);
    printf("valeur  en number  hexadecimal   : %x\n", number);


    return 0;
}
