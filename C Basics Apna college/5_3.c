#include <stdio.h>

void h(int count);

int main() {
    h(5);
    
    return 0;
}

void h(int count) {
    if (count == 0) {
return; 
    }
    printf("hello world\n ");
    h(count -1 );
}