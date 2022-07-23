#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x=0;
    printf("Enter an integer :\n");
    scanf("%d",&x);
    for (i=1;i<=99;i++)
    {
        x+=i;
    }
    printf("Sum = %d ",x);

    return 0;
}
