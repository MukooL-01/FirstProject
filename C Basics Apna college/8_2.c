#include <stdio.h>

int main() {

char nam[100];
printf("Enter your name : ");
fgets(nam,50,stdin);
puts(nam);
    return 0;
}