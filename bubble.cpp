#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
//best case O(n)
//worst case O(n*2)
//find maximum in first iteration
//this sort check first if array sorted or not
void bubbleSort(int arr[], int Size)
{
    bool flag = true;
    int c = 0;
    for (int i = 0; i < Size - 1; i++) //assum num of path
    {
        for (int j = 0; j < Size - i - 1; j++) //fun swaping
        {
            if (arr[j] < arr[j + 1]) //maximum
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
            c++;
        }
        if (flag == true)
            break;
    }
    cout << "#num of rounds : " << c << endl;
}
// function print
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
//main
int main()
{
    int arr[] = {100, 60, 20, 50, 30, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    printArray(arr, n);
}
