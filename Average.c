#include<stdio.h>
int main(){
  float A,B,C,Avg;
  printf("The value of a: ",A);
  scanf("%f",&A);

  printf("The value of b: ",B);
  scanf("%f",&B);

  printf("The value of c: ",C);
  scanf("%f",&C);

  Avg=(A+B+C)/3;
  printf("The Average of %.2f, %.2f, %.2f is %.2f",A,B,C,Avg);

  return 0;
}