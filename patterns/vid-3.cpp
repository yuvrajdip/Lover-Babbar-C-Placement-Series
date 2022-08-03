#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 7)
    {
        int j = 1;
        while (j <= 7)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}