#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i != 5)
            {
                if (j == 0 || j == i - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}

/*

*
**
* *
*  *
*****

*/