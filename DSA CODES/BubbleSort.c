#include <stdio.h>

void printArr(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
        printf("\n");
}

void AdaptivebubbleSort(int *A,int n)
{
    int isSorted =0;
        for(int i=0;i<n-1;i++)//this loop is for number of passes
    {        
        printf("Working on pass number %d \n ",i+1);
    
        isSorted =1;
        for(int j=0;j<n-i-1;j++)//this loop is for number of comparisons in each pass
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                isSorted = 0;
            }
        }
         if(isSorted)
            {
                return;
            }
    }
}

void bubbleSort(int *A,int n)
{
        for(int i=0;i<n-1;i++)//this loop is for number of passes
    {
        for(int j=0;j<n-i-1;j++)//this loop is for number of comparisons in each pass
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main(){
    int A[]={16,9,6,39,25,2};
    int n=6;
    printf("Printing array before sorting \n");
    printArr(A,n);
    bubbleSort(A,n);
    printf("printing array after sorting\n");
    printArr(A,n);
    return 0;
}