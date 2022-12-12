#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
//Best - Average - Worst case:O(n log n)
//Space:O(1)

int partition1(int arr[], int start, int endi)
{
    int povit = arr[start];
    int Begin = start; //Start
    int Endi = endi;
    while (Begin < Endi)
    {
        do
        {
            Begin++;
        } while (arr[Begin] <= povit);
        do
        {
            Endi--;
        } while (arr[Endi] > povit);
        if (Begin < Endi)
            swap(arr[Begin], arr[Endi]);
    }
    swap(arr[start], arr[Endi]);
    return Endi;
}

void quickSort1(int arr[], int start, int endi)
{
    if (start < endi)
    {
        int piv = partition1(arr, start, endi);
        quickSort1(arr, start, piv);
        quickSort1(arr, piv + 1, endi);
    }
}

int main()
{
    int arr[] = {70, 90, 60, 20, 30};
    int s = sizeof(arr) / sizeof(arr[0]);
    quickSort1(arr, 0, s);
    cout << "Sorted Array by quick sort : ";
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
}

