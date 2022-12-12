#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int SequentialSreach(int arr[], int n, int key) //linear sreach
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i; //I found your element
    }
    return -1; // can't find your element you sreach for
}

int main()
{
    int arr[] = {100, 50, 70, 4, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int numb;
    cout << "Enter an Integer : ";
    cin >> numb;

    int result = SequentialSreach(arr, n, numb);
    if (result == -1)
        cout << "The number :( " << numb << ") Was Not Found " << endl;
    else
    {
        cout << "The number :( " << arr[result] << ") Was Found At index : (" << result << ")" << endl;
    }
}