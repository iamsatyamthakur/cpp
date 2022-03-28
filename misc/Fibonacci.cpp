/*  This simple CPP Program generates a Fibonacci series
    up to n terms                                             */

#include <iostream>
using namespace std;
void fibonacci(int n)
{
    int a = 0, b = 1, c;
    cout << "Fibonacci series:" << endl;
    cout << a << "\t" << b << "\t";
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        cout << c << "\t";
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cout << "Input number of terms: ";
    cin >> n;
    fibonacci(n);
    return 0;
}