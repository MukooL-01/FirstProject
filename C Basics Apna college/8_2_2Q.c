#include <stdio.h>
#include <string.h>

void salt(char password[]);

int main() {

char password[100];
scanf("%s",password);
salt(password);
    return 0;
}
void salt(char password[]) {
    char salts[]="123";
    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salts);
    puts(newpass);
}