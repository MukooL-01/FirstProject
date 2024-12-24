#include <stdio.h>

int main() {

    int aadhar[5];
    int *ptr= &aadhar[0];
    for(int i=0; i<5; i++){
        printf("%d idex : ",i);
        scanf("%d",aadhar[i]);
    }
    
    for (int i=0;i<5;i++){
        printf("%d index\n = %d\n",i,aadhar[i]);

    }
    
    return 0;
}