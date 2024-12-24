#include <stdio.h>
int main () {
    float i = 100.00;
    float *ptr =&i;
    float **pptr =&ptr;

printf("%f",**pptr);

    return 0;
}