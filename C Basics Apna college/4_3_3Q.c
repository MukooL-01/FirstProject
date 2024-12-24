#include <stdio.h>

int main() {
    int n;
    do {
    printf("enter a odd number :");
    scanf("%d",&n);
    printf("You entered : %d\n",n);

    } while (n%2==0);
printf("Thank You");
    return 0 ;

}