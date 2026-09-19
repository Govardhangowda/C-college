#include<stdio.h>
int main(){

  float BI,M,H;
  printf("Enter your Body Mass: ");
  scanf("%f",&M);

  printf("Enter you height: ");
  scanf("%f",&H);

  BI=M/(H*H);

  printf("Your BM Index is: %.2f",BI);
  return 0;
}