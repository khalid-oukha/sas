#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char caractere;
    printf("entrez un caractere :");
    scanf ("%c",&caractere);

    if(caractere=='A' || caractere=='E' || caractere=='I' || caractere=='O' || caractere=='U' || caractere=='Y'){
        caractere = caractere - 32;
    }
       switch(caractere){
     case 'a':
     printf("voyelle");
     break;

      case 'e':
     printf("voyelle");
     break;
      case 'i':
     printf("voyelle");
     break;
      case 'o':
     printf("voyelle");
     break;
      case 'u':
     printf("voyelle");
     break;
      case 'y':
     printf("voyelle");
     break;
        default:
        printf("ce pas un voyelle");
        break;
       }


    return 0;
}
