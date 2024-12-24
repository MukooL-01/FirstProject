#include <stdio.h>

int binarysearch(int arr[], int size, int element)
{
    int mid, high = size - 1, low = 0;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return element;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
};
int main()
{

    int arr[] = {1, 2, 4, 7, 8, 11, 13, 17, 24, 28, 30, 69, 70, 77, 87, 89, 90, 94, 96, 99, 100};
    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("enter an element to find if it is present or not : ");
    scanf("%d", &element);
    binarysearch(arr, size, element);
    int isitthere = binarysearch(arr, size, element);

    if (isitthere != -1)
    {
        printf("Element is present \n ");
    }
    else
    {
        printf("Element is not Present \n");
    }
    return 0;
}