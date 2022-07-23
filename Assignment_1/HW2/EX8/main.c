#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    char  operator;
    printf("Enter operator either + or - or * or /\n");
    scanf("%c",&operator);
    printf("Enter Two operarands \n");
    scanf("%d   %d",&num1,&num2);
    switch(operator)
    {
    case '+':
        {
            printf("%d + %d = %d ",num1,num2,num1+num2);
        }
        break;
    case '-':
        {
           printf("%d - %d = %d ",num1,num2,num1-num2);
        }
        break;
    case '*':
        {
            printf("%d * %d = %d ",num1,num2,num1*num2);
        }
        break;
    case '/':
        {
            printf("%d / %d = %d ",num1,num2,num1/num2);
        }
        break;


    }

    return 0;
}
