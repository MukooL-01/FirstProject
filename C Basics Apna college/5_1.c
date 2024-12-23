#include <stdio.h>

void namastey();
void bonjour();

int main() {
char n; 
printf("enter i for indian and f for french :");
scanf("%c",&n);

if(n=='i'){
    namastey();
}else {
    bonjour();
}
    return 0;
}

void namastey() {
    printf("Namastey\n");
}
void bonjour() {

    printf("bonjour");
}