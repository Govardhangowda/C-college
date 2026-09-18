#include<stdio.h>
int main(){
  float V,R,H;
  printf("The Radius of the cylinder is:");
  scanf("%f",&R);

  printf("The Height of the cylinder is:");
  scanf("%f",&H);

  V=3.14*(R*R)*H;

  printf("The Volume of the cylinder is: %.2f",V);
  return 0;
}