#include <stdio.h>
#include <stdlib.h>

int main() {
float *ptr;
ptr=(float*)(malloc(5*sizeof(float)));
ptr[0]=90.90;
ptr[1]=80.70;
ptr[2]=70.90;
ptr[3]=69.69;
ptr[4]=70.99;

for(int i=0;i<6;i++) {
    printf("%f\n",ptr[i]);
}
    return 0;
}