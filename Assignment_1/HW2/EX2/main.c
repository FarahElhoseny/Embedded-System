#include <stdio.h>
#include <stdlib.h>

int main()
{   char alphabet;
    printf("enter an alphabet : ");
     scanf("%c",&alphabet);
    if (alphabet == 'a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
        printf("%c is vowel ",alphabet);
    else
        printf("%c is constant ",alphabet);
    return 0;
}
