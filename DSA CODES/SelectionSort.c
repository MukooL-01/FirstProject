#include <stdio.h>

void printArr(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
        printf("\n");
}

void SelectionSort(int * A,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int IndexOfMin = i;
        int temp;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[IndexOfMin])
            IndexOfMin=j;
        }
        temp=A[i];
        A[i]=A[IndexOfMin];
        A[IndexOfMin]=temp;
    }
}

int main()
{
    int A[]={3,5,2,13,12};
    int n = 5;

    printf("Printing Arr Before Insertion\n");
    printArr(A,n);
    SelectionSort(A,n);
    printf("Printing Arr After Insertion\n");
    printArr(A,n);

    return 0;
}