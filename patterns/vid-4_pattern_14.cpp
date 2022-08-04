#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (i <= 10)
    {
        int j = 1, val = i;
        while (j <= 10)
        {
            if (j >= i)
            {
                cout << val << " ";
                val++;
            }
            else
            {
                cout << " "
                     << " ";
            }
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}