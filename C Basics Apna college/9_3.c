#include <stdio.h>

struct student {
    int roll;
    char name[100];
    float cgpa;
};
int main() {
    struct student s1 ={1569,"MUKUL",8.8};
    struct student s2 ={6369,"zayam",8.6};
    struct student s3={0};
    printf("name is : %s\n",s1.name);
    printf("Roll number is :%d\n",s1.roll);
    printf("Cga is: %f\n",s1.cgpa);

    
    printf("name is : %s\n",s2.name);
    printf("Roll number is :%d\n",s2.roll);
    printf("Cga is: %f\n",s2.cgpa);

    return 0;
}