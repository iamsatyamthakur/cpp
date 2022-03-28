/* CPP Program to insert new element at given index number in the array. */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int n, value;
    cout << "Enter no of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> value;
        arr.push_back(value);
    }
    cout << "\nArray: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    int index;
    cout << "Enter index number to insert new element: ";
    cin >> index;
    cout << "Enter new element: ";
    cin >> value;
    arr.emplace(arr.begin() + index, value);

    cout << "\nArray after insertion of new element: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    arr.clear();
    return 0;
}