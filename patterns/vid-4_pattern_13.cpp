#include <iostream>
using namespace std;

int main()
{
    // 1,1 1,2 1,3 1,4
    // 2,1 2,2 2,3 2,4
    // 3,1 3,2 3,3 3,4

    int i = 1;
    while (i <= 7)
    {
        int j = 1;
        while (j <= 7)
        {
            if (j >= i)
                cout << "*"
                     << " ";
            else
                cout << " "
                     << " ";
            j++;
        }

        i++;
        cout << endl;
    }
    return 0;
}