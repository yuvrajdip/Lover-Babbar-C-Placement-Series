#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    char val = 'A';
    while (i <= 26)
    {
        int j = 1;
        while (j <= 26)
        {
            cout << val << " ";
            j++;
        }
        val++;
        i++;
        cout << endl;
    }

    // cout << val << endl;
    // val++;
    // cout << val << endl;
    return 0;
}