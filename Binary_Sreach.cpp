#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
// Array must be sorted to sreach
// Best case=O(1)--Average_Worst case =O(log N)
//space compexity O(1)

int binarySreach(int arr[], int left, int right, int element)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] > element)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 6, 7, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int numb;
    cout << "Enter number : ";
    cin >> numb;
    int result = binarySreach(arr, 0, n - 1, numb);
    if (result == -1)
        cout << "The number :( " << numb << ") Was Not Found " << endl;
    else
    {
        cout << "The number :( " << arr[result] << ") Was Found At index : (" << result << ")" << endl;
    }
}