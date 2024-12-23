#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    char name[100];
    float cgpa;
};

int main() {
struct student ece[100];
ece[0].roll=6969;
ece[0].cgpa=2.0;
strcpy(ece[0].name,"Abhinav");

printf("Name of Ece 1st student is : %s\n",ece[0].name);
printf("Roll no is : %d\n",ece[0].roll);
printf("Cgpa is : %f\n",ece[0].cgpa);

    return 0;
}