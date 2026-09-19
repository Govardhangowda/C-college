#include<stdio.h>
int main(){
  float V,I,R;
  printf("Enter the value of current: ");
  scanf("%f",&I);

  printf("Enter The value of Resistance: ");
  scanf("%f",&R);

  V=I*R;
  printf("The value of Voltage is: %.2f",V);
  return 0;
}