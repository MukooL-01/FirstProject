#include <stdio.h>

int main()
{
  // int math=90;
  // int eng= 89;
  //  int hin=88;

  float marks[3];
  float sum;
  float fp;

  printf("enter price of Burger \n :  ");
  scanf("%f/n", &marks[0]);

  printf("enter price of Pizza \n :  ");
  scanf("%f/n", &marks[1]);

  printf("enter price of Pasta \n :  ");
  scanf("%f/n", &marks[2]);

  printf("price of Burger is %f\n  price of Pizza is %f\n  price of Pasta is %f\n", marks[0], marks[1], marks[2]);

  sum = marks[0] + marks[1] + marks[2];
  fp = sum + sum * 0.18;

  printf("the final price of all items is : %f", fp);
  return 0;
}