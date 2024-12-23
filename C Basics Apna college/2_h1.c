#include <stdio.h>
int main() {
    float a , b , c  ;

    printf("enter first number : ");
    scanf("%f ",&a);
     
    printf("enter second number : ");
    scanf("%f ",&b);

    printf("enter third number : ");
    scanf("%f ",&c);
     
     float average = (a+b+c)/3;
     printf(" the average of %f , %f and %f is:" , average );

    return 0;
}