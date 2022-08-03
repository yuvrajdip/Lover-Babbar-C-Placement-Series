#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    char val = 'A';
    while (i <= 5)
    {
        int j = 1;
        while (j <= 5)
        {
            cout << val << " ";
            val++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}