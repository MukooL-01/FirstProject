#include <stdio.h>

void printArr(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void QuickSort(int A[], int low, int high)
{
    int partitionIndex; // INDEX OF PIVOT AFTER PARTITION

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        QuickSort(A, low, partitionIndex - 1);
        QuickSort(A, partitionIndex + 1, high);
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 12, 69, 22, 1, 7, 3};
    int n = 10;

    printf("Printing Arr Before Insertion\n");
    printArr(A, n);
    QuickSort(A, 0, n - 1);
    printf("Printing Arr After Insertion\n");
    printArr(A, n);

    return 0;
}