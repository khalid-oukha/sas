#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,num1,num2,num3,rev;
    printf("entre un nombre entier � trois chiffres :");
    scanf("%d",&number);
    if(number>99 && number<1000)
       {
    num1 = number/100;
    num2 = (number/10)-(num1*10);
    num3 = number%10 ;

    rev= (num3*100)+(num2*10)+num1;
    printf("inverse est %d ",rev);
       }
else{
    system("pause");
}

    return 0;
}
