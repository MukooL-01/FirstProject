#include <stdio.h>

void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int indInsertion(int arr[],int size,int elem,int capacity,int index)
{
    if(size>=capacity)
    {
        return -1;
    }
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=elem;
    return 1;
}

int main()
{

    int arr[100] = {1,3,7,8,10,12,27,69,72,88};
    int size = 10;
    int elem = 70;
    int index = 8;
    int capacity = 100;
     show(arr, size);

    indInsertion(arr,size,elem,capacity,index);
     size++;
        show(arr, size);
       for(int i=0;i<=size;i++)
       {
            if(arr[i] == elem)
            {
                printf("Insetion was successful\n");
            }
       }
    return 0;
}