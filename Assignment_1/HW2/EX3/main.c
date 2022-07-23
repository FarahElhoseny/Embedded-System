#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    printf("Enter the first number :\n");
    scanf("%f",&x);
    printf("Enter the sec number :\n");
    scanf("%f",&y);
    printf("Enter the third number :\n");
    scanf("%f",&z);
    if (x>y&&x>z)
        printf("largest number is %f \n",x);
    else if (z>y&&z>x)
         printf("largest number is %f \n",z);
    else
         printf("largest number is %f \n",y);



    return 0;
}
