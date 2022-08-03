#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    char val = 'A';
    while (i <= 7)
    {
        int j = 1;
        while (j <= i)
        {
            cout << val << " ";
            j++;
        }
        i++;
        val++;
        cout << endl;
    }
    return 0;
}