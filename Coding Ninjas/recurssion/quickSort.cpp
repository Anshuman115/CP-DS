#include <iostream>
// #include "Solution.h"
using namespace std;

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

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    quickSort(input, n);
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;
}
