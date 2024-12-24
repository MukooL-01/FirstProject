#include <stdio.h>
#include <stdlib.h>

void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void indDeletetion(int arr[], int size, int capacity, int index)
{
    if (index > capacity)
    {
        printf("Wrong index pierced Threshold Capacity \n");
    }
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
};

int main()
{
    int arr[100] = {1, 2, 5, 7, 9, 13, 45, 69, 89};
    int size = 9;
    int capacity = 100;
    int index = 0;
    printf("Arr before deletetion : \n");
    show(arr, size);
    size--;
    indDeletetion(arr, size, capacity, index);
    printf("Arr after deletetion : \n");
    show(arr, size);

    return 0;
}