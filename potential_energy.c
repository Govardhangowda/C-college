#include<stdio.h>
int main(){
  float PE,M,H;
  printf("Enter The value of Mass: ");
  scanf("%f",&M);

  printf("Enter the value of height: ");
  scanf("%f",&H);

  PE=M*(9.8)*H;
  printf("The value of Potential energy is:%.2f ",PE);
  return 0;
}