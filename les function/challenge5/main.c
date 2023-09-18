#include <stdio.h>
#include <stdlib.h>

//Challenge 5 :
float Permuter(float a,float b)
{
        float cpt;
        cpt=a;
        a=b;
        b=cpt;
        return a , b;
}

int main()
{
        printf("%.2f / %.2f",Permuter(15.52 , 55.51));
        return 0;
}
