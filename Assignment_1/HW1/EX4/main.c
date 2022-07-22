#include <stdio.h>
#include <stdlib.h>

int main()
{
     float number1, number2, sum;

    printf("Enter two integers: ");
    scanf("%f %f", &number1, &number2);

    // calculating sum
    sum = number1 + number2;

    printf("%f + %f = %f", number1, number2, sum);
    return 0;
}
