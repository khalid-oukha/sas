#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet;
    printf("entrez un alphabet : \n");
    scanf("%c",&alphabet);
     if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
        {
         if(alphabet>=65 && alphabet<=90){
        printf("%c alphabet majuscule.",alphabet);
    }
    else{
        printf("%c alphabet minuscule",alphabet);
    }
     }

    return 0;
}
