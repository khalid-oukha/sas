#include <stdio.h>
#include <stdlib.h>

int max2(a,b)
{
    if(a-b>0)
    {
        return a;
    }
    return b;
}
int max4(a,b,c,d)
{
    if(max2(a,b) > max2(c,d))
    {
        return max2(a,b);
    }
    return max2(c,d);
}
int main()
{

    printf("%d",max4(12,15,4,6));
    return 0;
}
