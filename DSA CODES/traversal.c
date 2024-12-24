#include <stdio.h>

void show(int arr[],int n) 
{
    for(int i=0;i<n;i++)            //TRAVERSAL-Visiting every element of an array once;
    {
        printf("%d\n",arr[i]);
    }
 }

int main() {

int arr[100]={1,2,6,78};

show(arr,4);
    return 0;
}