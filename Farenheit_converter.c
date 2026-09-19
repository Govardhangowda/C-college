#include<stdio.h>

int main(){
  float F,C;

  printf("Enter the temperature in Celsius: ");
  scanf("%f",&C);

  F=(9*C)/5 +32;

  printf("The temperature in Farenheit is: %.2f",F);
  return 0;
}