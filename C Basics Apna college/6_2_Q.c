#include <stdio.h>

void swap(int a , int b);

void sw(int *a, int *b);

int main() {
int x = 3 , y = 5 ;
//swap(int x, int y);
//printf("X = %d & y= %d\n" , x, y);

sw(&x,&y);
printf("x=%d & y=%d\n",x ,y);

    return 0;
}
//void swap(int a,int b) { 
  //  int t =a ;
    //a = b;
    //b = t ;
    //printf("a=%d & b=%d\n ", a ,b);
//}

void sw(int *a,int *b) { 
int t = *a;
*a=*b;
*b=t;
printf("a=%d & b=%d", *a,*b);
}