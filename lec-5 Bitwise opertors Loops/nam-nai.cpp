#include <iostream>
using namespace std;

int main()
{
    /* // Fibonaaci Series
    cout << "Fibonacci series of : ";
    int n;
    cin >> n;

    unsigned long long pre1 = 0, pre2 = 1;
    // printing fibonacci series

    cout << pre1 << " " << pre2 << " ";

    for (int i = 3; i <= n; i++)
    {
        unsigned long long clonePre2 = pre2;
        pre2 = pre1 + pre2;
        cout << pre2 << " ";
        pre1 = clonePre2;
    } */

    // division operation
    // INPUT -> double/int      OUTPUT -> double
    // INPUT -> float/int       OUTPUT -> float
    // INPUT -> int/int         OUTPUT -> int

    /*
        Bitwise operation

    */

    int a = 17;

    // Right Shift Operator
    a = a >> 1; // It means dividing the operand by 2

    cout << a << endl;

    a = a >> 2; // It means dividing the operand by 2*2

    cout << a << endl;

    int b = 12;

    // Left Shift Operator
    b = b << 1; // It means multiplying the operand by 2

    cout << b << endl;

    b = b << 2; // It means multiplying the operand by 2*2
    cout << b << endl;

    // AND , OR , XOR , NOT operation
    int x = 4, y = 7, z;
    z = x & y;
    cout << "x AND y : " << z << endl;

    z = x | y;
    cout << "x OR y : " << z << endl;

    z = x ^ y;
    cout << "x XOR y : " << z << endl;

    x = ~x;
    cout << "NOT of X : " << x << endl;
    return 0;
}