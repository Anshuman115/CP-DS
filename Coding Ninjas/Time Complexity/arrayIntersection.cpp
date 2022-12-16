#include <iostream>
#include <algorithm>
using namespace std;

// #include "solution.h"

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (a[i] <= pivot && i < high)
        {
            i++;
        }
        while (a[j] >= pivot && j > low)
        {
            j--;
        }
        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[j], &a[low]);
    return j;
}

void QuickSort(int input[], int low, int high)
{
    int pivot;
    if (low < high)
    {
        pivot = Partition(input, low, high);
        QuickSort(input, low, pivot - 1);
        QuickSort(input, pivot + 1, high);
    }
}

void quickSort(int input[], int size)
{

    int low = 0;
    int high = size - 1;

    QuickSort(input, low, high);
}

void intersection(int *arr1, int *arr2, int n, int m)
{
    // Write your code here
    quickSort(arr1, n);
    quickSort(arr2, m);
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else
        {
            if (arr1[i] > arr2[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size1, size2;

        cin >> size1;
        int *input1 = new int[size1];

        for (int i = 0; i < size1; i++)
        {
            cin >> input1[i];
        }

        cin >> size2;
        int *input2 = new int[size2];

        for (int i = 0; i < size2; i++)
        {
            cin >> input2[i];
        }

        intersection(input1, input2, size1, size2);

        delete[] input1;
        delete[] input2;

        cout << endl;
    }

    return 0;
}