#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%i", j);
        }
        printf("\n");
    }
}
/*
12
123
1234
12345
123456
*/




