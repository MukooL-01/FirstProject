#include <stdio.h>
int main() {
    int n  ;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1 ;i<=10;i++){
    
    int table = n * i ;
    printf("%d x %d = %d\n", n , i , table );
    }
    return 0;
}