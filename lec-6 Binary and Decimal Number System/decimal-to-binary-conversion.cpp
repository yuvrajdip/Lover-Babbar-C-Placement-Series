#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Most efficient & Unique way to convert Decimal to Binary Number

    cout << "Enter Decimal Number :";
    int n;
    cin >> n;

    int answer = 0, i = 0;

    while (n != 0)
    {
        int bit = n & 1; // bit = n%2 ;

        answer = (bit * pow(10, i)) + answer;

        n = n >> 1; // n = n/2 ;
        i++;
    }

    cout << "Binary Number is: " << answer << endl;
    return 0;
}