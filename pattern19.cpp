#include <iostream>
using namespace std;
int main()
{
    int i, j, space;
    for (i = 1; i <= 8; i++)
    {
        for (space = 1; space <= (8 - i); space++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}