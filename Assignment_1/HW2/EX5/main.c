#include <stdio.h>
#include <stdlib.h>

int main()
{   // alphabet ASCII from 65 to 122
    char x;
    printf("enter your character :\n");
    scanf("%c",&x);
    int y;
    y=x;
    if (y>=65&&y<=122)
        printf("%c is an alphabet\n",x);
    else
        printf("%c is not an alphabet\n",x);

    return 0;
}
