#include <iostream>
using namespace std;

int main()
{
    // A B C D
    // B C D E
    // C D E F

    int i = 1;

    char val = 'A';

    while (i <= 10)
    {
        int j = 1;
        int afterval = val + 1;
        while (j <= 10)
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