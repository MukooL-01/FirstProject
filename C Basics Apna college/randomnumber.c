#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int num1 =(rand() % 6) + 1 ; //this means a random number between 1 & 6 ;

    printf("%d",num1);
}