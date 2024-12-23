#include <stdio.h>

void printArr(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void Merge(int A[], int B[], int C[], int m, int n)
{
    int i, j, k;
    i = j = k = 0;
    while (i <= m && j <= n)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
            C[k] = B[j];
            k++;
            j++;
        }
    }
    while (i <= m)
    {
        C[k] = A[i];
        i++;
        k++;
    }
    while (j <= n)
    {
        C[k] = B[j];
        k++; 
        j++;
    }
}

int main()
{
    int A[] = {1,5,7,9,15};
    int m = 5;
    int B[] = {1, 1, 2, 4, 10, 69};
    int n = 6;
    int o = m + n;
    int C[o];

    // printf("Printing Arr Before Insertion\n");
    // printArr(C,o);
    Merge(A, B, C, m, n);
    printf("Printing Arr After Merging\n");
    printArr(C, o);

    return 0;
}