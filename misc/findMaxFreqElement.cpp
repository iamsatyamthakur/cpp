/*  CPP Program to find the element 
    which appears maximum number of times in 
    the array.
*/
#include <iostream>
using namespace std;
int maxFrequency(int arr[], int n)
{
    int max_count = 0, index = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > max_count)
        {
            max_count = count;
            index = i;
        }
    }
    return index;
}
int main()
{
    int n;
    cout << "Enter no. of elements in the array: ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> array[i];
    }

    cout << "\nArray : ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    int pos = maxFrequency(array, n);
    cout << "\n\nElement appearing max no. of times = " << array[pos];
    return 0;
}