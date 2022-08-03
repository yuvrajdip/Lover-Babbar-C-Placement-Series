#include <iostream>
using namespace std;

int main()
{
    int i = 1, item = 1;

    while (i <= 7)
    {
        int j = 1;
        while (j <= i)
        {
            cout << item << " ";
            item++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}