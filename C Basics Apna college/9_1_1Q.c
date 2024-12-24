#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[100];
    float cgpa;
};

int main() {

struct student s1,s2,s3;
s1.roll=6985;
s1.cgpa=8.3;
strcpy(s1.name,"Hars");

s2.roll=5689;
s2.cgpa=9.1;
strcpy(s2.name,"Mukul");

s3.roll=4425;
s3.cgpa=8.5;
strcpy(s3.name,"Ayam");

printf("Name of the student is : %s\n", s1.name);
printf("Roll number is : %d\n",s1.roll);
printf("CGPA of student is : %f\n",s1.cgpa);


printf("Name of the student is : %s\n", s2.name);
printf("Roll number is : %d\n",s2.roll);
printf("CGPA of student is : %f\n",s2.cgpa);


printf("Name of the student is : %s\n", s3.name);
printf("Roll number is : %d\n",s3.roll);
printf("CGPA of student is : %f\n",s3.cgpa);

    return 0;
}