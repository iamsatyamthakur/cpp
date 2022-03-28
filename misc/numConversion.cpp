/*  Menu-driven CPP Program to convert Binary number
    to Decimal and vice versa   */

#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(long bin)
{
    long dec = 0, temp;
    int index = 0;
    temp = bin;
    while (temp != 0)
    {
        temp = temp / 10;
        index++;
    }
    for (int i = 0; i < index; i++)
    {
        int digit = bin % 10;
        dec = dec + digit * pow(2, i);
        if (bin != 0)
            bin = bin / 10;
        else
            break;
    }
    return dec;
}

long decimalToBinary(int dec)
{
    long bin = 0;
    int index = 0;
    while (dec != 0)
    {
        int digit = dec % 2;
        bin = bin + digit * pow(10, index);
        dec = dec / 2;
        index++;
    }
    return bin;
}

int main()
{
    while (true)
    {
        cout << "\n~~~~~~~* MENU *~~~~~~~" << endl;
        cout << "1. Binary to Decimal\n2. Decimal to Binary" << endl;
        cout << "3. Exit" << endl;
        int ch;
        cout << "Enter your choice: ";
        cin >> ch;
        if (ch == 3)
            break;
        switch (ch)
        {
        case 1:
            long num1;
            cout << "Enter a Binary number: ";
            cin >> num1;
            cout << "Decimal Equivalent = " << binaryToDecimal(num1);
            break;
        case 2:
            int num2;
            cout << "Enter a number: ";
            cin >> num2;
            cout << "Binary Equivalent = " << decimalToBinary(num2);
            break;
        }
        cout << endl;
    }
    return 0;
}