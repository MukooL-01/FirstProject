#include <stdio.h>

struct student {
    int roll;
    char name[100];
    float cgpa;
};

int main() {

struct student s1={1664,"MUKUL",12.0};
struct student *ptr=&s1;
printf("Student name is -> %s\n",ptr->name);
printf("Student cgpa is -> %f\n",ptr->cgpa);
printf("Student roll no. is -> %d\n",ptr->roll);
    return 0;
}