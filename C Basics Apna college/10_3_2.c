#include <stdio.h>

int main(){ 
FILE*fptr;
fptr=fopen("Test.txt","w");

fputc('B',fptr);
fputc('D',fptr);
fputc('S',fptr);
fputc('A',fptr);
fputc('M',fptr);

fclose(fptr);

    return 0;
}
