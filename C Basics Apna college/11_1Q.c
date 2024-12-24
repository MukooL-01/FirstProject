#include <stdio.h>
#include <stdlib.h>

int main() {
int *ptr;
ptr=(int*)(calloc(5,sizeof(int)));

ptr[0]=1;
ptr[1]=3;
ptr[2]=5;
ptr[3]=7;
ptr[4]=9;

    for(int i=0;i<5;i++) {
        printf("Odd numbers removed to be are : %d\n",ptr[i]);
    }
    ptr=realloc(ptr,6);
    
    ptr[0]=2;
    ptr[1]=4;
    ptr[2]=6;
    ptr[3]=8;
    ptr[4]=10;
    ptr[5]=12;

    for(int i=0;i<6;i++){
        printf("new memory numbers are : %d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}