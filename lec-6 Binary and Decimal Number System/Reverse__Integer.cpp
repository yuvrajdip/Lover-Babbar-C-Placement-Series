#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Conditions to reverse an Integer
    // int digit = n%10;
    // ans = ans*10 + digit ;

    int ans = 0;

    while (n != 0) // n !=0  is a mandatory. you can give n>0 but it will give WA for negative integers
    {
        int digit = n % 10;

        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            cout << 0 << endl;
            return 0;
        }

        ans = (ans * 10) + digit;

        n = n / 10;
    }

    cout << ans << endl;
    return 0;
}