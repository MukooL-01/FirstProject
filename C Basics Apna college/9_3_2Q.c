#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[100];
    float cgpa;
};

void printinfo(struct student s1);

int main() {

struct student s1={1664,"MUKUL",8.69};
printf("Student's info is  \n");
printinfo(s1);
     return 0;
}
void printinfo(struct student s1){
    printf("Student name is -> %s\n",s1.name);
    printf("Student cgpa is -> %f\n",s1.cgpa);
    printf("Student roll no. is -> %d\n",s1.roll);

}