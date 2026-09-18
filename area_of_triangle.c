#include<stdio.h>
int main(){
  float A,B,H;
  printf("Enter the breadth of the triangle:");
  scanf("%f",&B);

  printf("Enter the height of the triangle:");
  scanf("%f",&H);

  A=0.5*(B*H);
  printf("the area of triangle is: %.2f",A);
  
  return 0;
}