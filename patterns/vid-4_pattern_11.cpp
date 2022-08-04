#include <iostream>
using namespace std;

int main()
{
    // 1,1 1,2 1,3 1,4 1,5
    // 2,1 2,2 2,3 2,4 2,5
    int i = 1;
    while (i <= 5)
    {
        int j = 1, colSpaceLimit = 5 - i;
        while (j <= 5)
        {
            if (j <= colSpaceLimit)
            {
                cout << " "
                     << " ";
            }
            else
            {
                cout << "*"
                     << " ";
            }
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}