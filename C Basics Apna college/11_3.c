#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("enter the memry number : ");
    scanf("%d",&n);
float *ptr;
ptr=(float*)(calloc(n,sizeof(float)));

    for(int i=0;i<n;i++) {
        printf("%f\n",ptr[i]);
}
free(ptr);
ptr=(float*)calloc(2,sizeof(float));
for (int i=0;i<2;i++){ 
    printf("%f\n",ptr[i]);
}
    return 0;
}