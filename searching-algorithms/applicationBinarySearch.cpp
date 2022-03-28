/*  ## Binary Search Application ##
    Problem Statement:
    Write a function which accepts an array of integers along with the size of it. 
    The numbers are arranged in the list in increasing order until a particular 
    index and after that it is arranged in decreasing order. This function should 
    find and return the index position at which the increasing list starts decreasing. */

#include<iostream>
#include<cmath>
using namespace std;

int returnIndex(int arr[], int n)
{
    int low = 0, high = n-1;
    while(low<=high)
    {
        int mid = floor((low+high)/2);
        if(arr[mid] > arr[mid+1])
        {
            if(arr[mid-1] < arr[mid])
                return (mid+1);
            else
                high = mid-1;
        }
        else
            low = mid+1;
    }
    return -1;
}

int main()
{
    int length;
    cout<<"Enter size of array: ";
    cin>>length;
    int array[length];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<length;i++)
        cin>>array[i];
    cout<<endl;
    int result = returnIndex(array, length);
    if(result == -1)
        cout<<"Not found.";
    else
        cout<<"Index = "<<result;
    return 0;
}