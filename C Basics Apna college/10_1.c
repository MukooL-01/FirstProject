#include <stdio.h>

int main() {

FILE*fptr;
fptr=fopen("Teste.txt","w");
if (fptr== NULL) {
    printf("File does not exist\n");
}else {
    printf("File do exist");
    fclose(fptr);
}

    return 0;
}
