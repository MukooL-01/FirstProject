#include <stdio.h>

void rev(int arr[],int n);
void prinarr(int arr[],int n);

int main() {
int arr[]={1,2,3,4,5};

rev(arr,5);
prinarr(arr,5);

    return 0;
}

void rev(int arr[],int n) {
    for(int i=0;i<n/2;i++) {
        int firsval=arr[i];
        int secval=arr[n-i-1];
        arr[i]=secval;
        arr[n-i-1]=firsval;
    }
}
    void prinarr(int arr[],int n) {
        for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
        printf("\n");
    }