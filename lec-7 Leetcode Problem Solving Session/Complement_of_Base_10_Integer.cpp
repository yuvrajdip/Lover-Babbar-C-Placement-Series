#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m = n, mask = 0;

    while (m != 0)
    {
        mask = mask << 1;
        mask = mask | 1;

        m = m >> 1;
    }

    if (n == 0)
    {
        int ans = 1;
        cout << ans << endl;
        return 0;
    }
    n = ~n;

    int ans = n & mask;

    cout << ans << endl;
    return 0;
}