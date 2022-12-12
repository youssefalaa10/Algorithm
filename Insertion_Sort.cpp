#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

//Best case O(n)
//AVerage O(n*2)
//Worst case O(n*2)
//Space complexity O(1)

void Insertion_Sort(int arr[], int SIZE)
{
    int pointer, j;
    for (int i = 1; i < SIZE; i++)
    {
        pointer = arr[i];                  //70
        j = i - 1;                         //0
        while (j >= 0 && arr[j] > pointer) //shifting //minimum: arr[j]>pointer; maximum: arr[j]<pointer
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = pointer;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {70, 90, 60, 20, 30};
    int s = sizeof(arr) / sizeof(arr[0]);
    Insertion_Sort(arr, s);
    cout << "Sorted Array : \n";
    print(arr, s);
}
