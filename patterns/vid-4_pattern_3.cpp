#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    while (i <= 7)
    {
        int j = 1, val = i;
        while (j <= i)
        {
            cout << val << " ";
            val--;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
} // namespace std;
