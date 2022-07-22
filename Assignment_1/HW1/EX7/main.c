#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    printf("ENTER Value of A : ");
    scanf("%d",&A);
    printf("ENTER Value of B : ");
    scanf("%d",&B);
    A=A+B;
    B=A-B;
    A=A-B;
     printf("after swapping value of A := %d \r\n",A);
    printf("after swapping value of B := %d",B);

    return 0;
}
