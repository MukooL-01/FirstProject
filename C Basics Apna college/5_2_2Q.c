#include <stdio.h>
#include <math.h>

float areasq(float side);
float areaci(float radius);
float areare(float length , float breath);
int main() {
    float length = 17.00;
float breath = 18.00;

printf("your area of rectangle is \n : %f ", areare(length ,breath));

    return 0;
}
float areasq(float side){
    return side*side;
}
float areaci(float radius){
    return radius * 3.14 * radius;
}
float areare(float length , float breath) {
    return length * breath ;
}