// CPP Program to implement the linear search.

#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int f)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == f)
            return i;
    return -1;
}

int main()
{
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int find;
    cout << "Enter element to search: ";
    cin >> find;
    int result = linearSearch(arr, n, find);
    if (result == -1)
        cout << "\nElement not present in array";
    else
        cout << "\nElement present at index " << result;
    return 0;
}