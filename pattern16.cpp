#include <iostream>
using namespace std;
int main()
{
    int i, j, size = 5;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (i == 1 || i == size)
            {
                printf("*");
            }
            else if (j == 1 || j == size )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}