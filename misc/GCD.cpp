/* CPP Program to find out GCD of two numbers */

#include <iostream>
using namespace std;
int findGCD(int a, int b)
{
    int gcd = 1;
    for (int i = 2; i <= a && i <= b; i++)
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    return gcd;
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " = " << findGCD(num1, num2);
    return 0;
}