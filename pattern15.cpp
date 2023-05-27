#include <iostream>
using namespace std;
int main()
{
    int row, col, space;
    char letter = 'A';
    for (row = 1; row <= 5; row++)
    {
        for (space = 1; space <= 5 - row; space++)
        {
            cout << " ";
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("%c", letter);
            letter++;
        }
        printf("\n");
    }
}