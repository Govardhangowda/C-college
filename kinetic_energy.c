#include<stdio.h>

int main(){

  float KE,M,V;
  printf("Enter the Mass of the body: ");
  scanf("%f",&M);
  printf("Enter the Velocity of the body: ");
  scanf("%f",&V);

  KE=0.5*(V*V)*M;
  printf("The Kinetic Energy of the body is: %.2f joules",KE);
  return 0;
}