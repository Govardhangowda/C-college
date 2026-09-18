#include<stdio.h>
int main(){

  float SA,R;
  printf("Enter the Radius of Sphere: ");
  scanf("%f",&R);

  SA=3.14*(R*R)*4;
  printf("The surface Area of Sphere is: %.2f sq units",SA);

  return 0;
}