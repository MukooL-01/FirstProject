#include <stdio.h>

int sum(int n);

int main() {
printf("Sum of number is %d ", sum(10));
    return 0;
}

int sum(int n) {
    if(n==1){ 
        return 1 ;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n ;
    return sumN;
}