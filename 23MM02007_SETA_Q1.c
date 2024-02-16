#include <stdio.h>
#include <math.h>
int main()
{
  float rad,pi = 3.14;
  printf("Enter the radius of sphere : ");
  scanf("%f",&rad);
  printf("The volume of sphere is %.2f\n",4/3*(pi*pow(rad,3)));
  printf("The surface area of sphere is %.2f\n",4*(pi*pow(rad,2)));
  return 0;
}