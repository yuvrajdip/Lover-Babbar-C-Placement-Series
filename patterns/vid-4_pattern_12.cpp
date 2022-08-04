#include <iostream>
using namespace std;

int main()
{
    int i = 1, star = 7;

    while (i <= 7)
    {
        int j = 1;
        while (j <= star)
        {
            cout << "*"
                 << " ";
            j++;
        }
        star--;
        i++;
        cout << endl;
    }
    return 0;
}