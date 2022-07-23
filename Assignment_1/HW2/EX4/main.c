#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Enter your number :\n");
    scanf("%d",&x);
    if (x>0)
        printf("%d is positive ",x);
    else if (x<0)
        printf("%d is negative ",x);
    else
        printf("you entered Zero");

    return 0;
}
