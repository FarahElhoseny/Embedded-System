#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0,i,fact=1;
    printf("enter an integer:\n");
    scanf("%d",&num);
    if (num>0)
    {
        for (i=1;i<=num;i++)
        {

          fact*=i;

        }
        printf("%d",fact);
    }

    else
        printf("Error Factorial of negative number doesn't exist ");
    return 0;
}
