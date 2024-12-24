#include <stdio.h>

void printArr(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
        printf("\n");
}

void insertionsort(int *A,int n)
{
    int key;
    int j;
    //Loop for each pass
    for(int i=1;i<=n-1;i++)
    {
        key=A[i];
        j=i-1;
        //Loop for each passes
        while(j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}

int main()
{
    int A[]={12,54,69,7,13,5};
    int n=6;
 
    printf("Array Before Insertion Sort \n");
    printArr(A,n);
    insertionsort(A,n);
    printf("Array After Insertion Sort \n");
    printArr(A,n);
    return 0;
}
