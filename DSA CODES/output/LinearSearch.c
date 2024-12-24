#include <stdio.h>
#include <stdlib.h>

int linearsearch(int arr[],int element,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
};

int main() 
{
    int element;
    int arr[100]={1,5,8,235,8,34,2,875};
    int size=sizeof(arr)/sizeof(int);
    printf("Enter number to find it in array : \n");
    scanf("%d",&element);
    int numpresentornot= linearsearch(arr,element,size);
    int index=linearsearch(arr,element,size);
    printf("The element %d was found at index %d\n",element,index);
if(numpresentornot!=-1)
{
    printf("YES the element is present\n");
}else
{
    printf("NO the element is not present\n");
}

}