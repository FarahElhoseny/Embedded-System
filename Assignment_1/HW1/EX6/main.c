#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C;
    printf("ENTER Value of A : ");
    scanf("%d",&A);
    printf("ENTER Value of B : ");
    scanf("%d",&B);
    C=A;
    A=B;
    B=C;

    printf("after swapping value of A := %d \r\n",A);
    printf("after swapping value of B := %d",B);

    return 0;
}
