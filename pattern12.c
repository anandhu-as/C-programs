#include <stdio.h>
int main()
{
    int i, j, A = 64;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", A + j);
        }
        printf("\n");
    }
}


/*





A
AB
ABC
ABCD
ABCDE




*/