#include <stdio.h>

void arre(int arr[],int n);

int main() {

int arr[]={68,69,5,2,4};
arre(arr,5);
    
    return 0;
}

void arre(int arr[], int n) {
    for (int i=0; i<n ;i++){
    printf("%d\t",arr[i]);
    }
    printf("\n");
}