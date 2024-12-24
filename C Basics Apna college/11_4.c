#include <stdio.h>
#include <stdlib.h>

int main() {
int *ptr;
ptr=(int*)(calloc(5,sizeof(int)));

printf("enter numbers(5) : ");

    for(int i=0;i<5;i++) {
        scanf("%d\n",&ptr[i]);
    }
    ptr=realloc(ptr,8);
    
    for (int i=0;i<8;i++) {
        scanf("%d\n",&ptr[i]);
    }
    for(int i=0;i<8;i++){
        printf("number %d is %d \n",i,ptr[i]);
    }
    printf("\n");
    return 0;
}