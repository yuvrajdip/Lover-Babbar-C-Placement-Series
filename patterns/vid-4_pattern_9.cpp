#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    char val = 'A';
    while (i <= 5)
    {
        int j = 1;
        char afterval = val + 1;

        while (j <= i)
        {
            cout << val << " ";
            val++;
            j++;
        }

        val = afterval;
        i++;
        cout << endl;
    }
    return 0;
}