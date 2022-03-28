/* CPP Program to implement Binary Search Algorithm */

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int k, int n)
{
    int pos = -1, low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = floor((low + high) / 2);
        if (k == arr[mid])
        {
            pos = mid;
            break;
        }
        else if (k < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return pos;
}

int main()
{
    int N, key, res;
    cout << "Enter size of array: ";
    cin >> N;
    int arr[N];
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cout << "\nEnter element to search: ";
    cin >> key;
    res = binarySearch(arr, key, N);
    if (res == -1)
        cout << "Not found.";
    else
        cout << "Element found at index " << res;
    return 0;
}
