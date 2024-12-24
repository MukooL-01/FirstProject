#include <stdio.h>

int main() {
    int *ptr;
    int x;
    ptr =&x;
    *ptr=0;
    
    printf("x is : %d\n",x);
    printf("*ptr is : %d\n",*ptr);

   *ptr +=5;
   printf("x is :%d\n" ,x);
   printf("*ptr is :%d\n",*ptr);

   (*ptr)++;
   printf("x is :%d\n  ",x);
   printf("*ptr is :%d\n ",*ptr); 

    return 0;
}