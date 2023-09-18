#include <stdio.h>
#include <stdlib.h>


int challenge3(int a, int b)
{
    int rest=a%b;

    if(a%b==0)
    {
        return b;
    }
    else
    {
        return challenge3(a,rest);
    }


}

int main()
{
    printf("%d",challenge3(478, 155));
    return 0;
}
