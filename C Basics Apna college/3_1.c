#include <stdio.h>
int main() {
    int age ;
    printf("enter age : ");
    scanf("%d", &age);

    if(age >= 18){
        printf("you are an adult \n");
        printf("you are elligible");
    }
    else {
        printf("you are a minor \n");
        printf("you are not elligible ");
    }
    return 0;
}