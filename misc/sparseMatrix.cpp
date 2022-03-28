/*  Problem Statement:  WAP to check whether given Matrix is sparse or not.
    If matrix is sparse then represent it in triplet form with the help of 
    array data structure. Also print the number of bytes that are saved or 
    wasted when you represent input matrix in the triplet form.
    [Sparse Matrix : Matrix in which more than 50% of total elements are zero.]
*/

#include <iostream>
using namespace std;
int main()
{
    int m, n, count = 0;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
                count++;
        }
    }
    if (3 * (count + 1) < m * n)
    {
        cout << "Matrix is sparse.\n\n";
        int triplet[count + 1][3];
        triplet[0][0] = m;
        triplet[0][1] = n;
        triplet[0][2] = count;
        int k = 1;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] != 0)
                {
                    triplet[k][0] = i;
                    triplet[k][1] = j;
                    triplet[k][2] = arr[i][j];
                    k++;
                }
            }
        }
        cout << "Triplet representation: " << endl;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << triplet[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "Data saved = " << (m * n - (count + 1)) * sizeof(int);
    }
    else
    {
        cout << "Matrix is NOT sparse." << endl;
    }
}