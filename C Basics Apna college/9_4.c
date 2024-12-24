#include <stdio.h>
#include <string.h>

typedef struct employeeofmicrosoft{
    int userid;
    float percentage;
    char name[100];
}eom;

int main() {
    eom e1 = {1546,98.62,"Mukul Teotia"};
    
    printf("Employee name is -> %s\n",e1.name);
    printf("Employee percentage is -> %f\n",e1.percentage);
    printf("Employee roll no. is -> %d\n",e1.userid);

    return 0;
}