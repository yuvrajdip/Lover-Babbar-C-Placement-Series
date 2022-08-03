#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    char val = 'D';
    while (i < 4)
    {
        int j = 0;
        val = 'D' - i;
        while (j <= i)
        {
            cout << val << " ";
            val++;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}