#include <stdio.h>
#include <stdlib.h>

void printArr(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maxVal(int A[], int n)
{
    int max = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int A[],int n)
{
    int i,j;
    int max = maxVal(A,n);
    int *count =(int*)malloc((max+1)*sizeof(int));
    for(int i=0;i<=max;i++)
    {
        count[i]=0;
    }
    for(int i =0 ; i<n ; i++)
    {
        count[A[i]]=count[A[i]]+1;
    }
    i=0;
    j=0;
    while(i<=max)
    {
        if(count[i]>0)
        {
            A[j]=i;
        count[i]=count[i]-1;
        j++;
        }
        else
        {
            i++;
        }
    }
    free(count);
}


int main()
{
    int A[] = {9,1,4,14,4,15,6};
    int n = 7;

    printf("Printing Arr before CountSort\n");
    printArr(A,n);
    countSort(A,n);
    printf("Printing Arr After CountSort\n");
    printArr(A, n);

    return 0;
}