#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge 2 : Affichage Température

    float F;
    float C;
        printf("enter la temperature en fahrenheit :");
        scanf("%f",&F);
        C = (F-32)/1.8;
        printf("la temperature :%.2f C \n",C);

    if(C<=10){
        printf("très froid");

    }
    else if(C>10 && C<=25)
        {
        printf("froid");
        }
    else if(C>25 && C<=35){
        printf("chaud");
    }
    else if(C>35){
        printf("tres chaud");
    }
}
