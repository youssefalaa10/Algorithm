#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

//l==left -- r==right -- m==divide array to two arrays--
// i== for array left -- j==for array right -- k== for merge two arrays
void merge(int arr[], int l, int m, int r) //m=l+(r-l)/2
{
    int i, j, k;
    int n1 = m - l + 1;                     //first subarray is arr[l..m]
    int n2 = r - m;                         //second subarray is arr[m+1..r]
    int *L = new int[n1], *R = new int[n2]; //dynmic array

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) //sort
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {60, 10, 20, 5, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);
    print(arr, n);
}
