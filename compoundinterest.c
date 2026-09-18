#include<stdio.h>
#include<math.h>
int main(){
  float P,R,T,CI;
  printf("Enter the principal amount: ");
  scanf("%f",&P);
  printf("Enter the Rate of Interest: ");
  scanf("%f",&R);
  printf("Enter the Time(years): ");
  scanf("%f",&T);
  float power= pow((1+ (R/100),T));
  CI=power*P;
  printf("The Compund Interest is: %f",CI);
  return 0;

}