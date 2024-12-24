#include <stdio.h>

int main() {
    int age =22;
    int *ptr = &age;

printf("%d\n",*(&age)); //we can use %p or %u it will give us affress 
printf("%d\n",*ptr);
printf("%d\n",age);
    return 0;

}