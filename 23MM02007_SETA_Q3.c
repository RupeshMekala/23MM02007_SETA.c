#include <stdio.h>
#include <math.h>
int main()
{
  int a,b,c,root_1,root_2;
  printf("Enter the coefficient of x^2 : ");
    scanf("%d",&a);
  printf("Enter the coefficient of x : ");
  scanf("%d",&b);
  printf("Enter the constant term : ");
  scanf("%d",&c);
  
  if (pow(b,2)-4*a*c>0){
    
    root_1 = (-b + pow(pow(b,2)-4*a*c,1/2))/(2*a);
    root_2 = (-b - pow(pow(b,2)-4*a*c,1/2))/(2*a);
    printf("The roots are %d and %d.\n",root_1,root_2);
    printf("The quadratic equation has real roots.\n");
  }
  else if (pow(b,2)-4*a*c == 0){
    root_1 = (-b/2*a);
    root_2 = (-b/2*a);
    printf("The roots are %d and %d.\n",root_1,root_2);
    printf("The quadratic equation has real and equal roots.\n");
  }
  else {
    printf("Imaginary roots");
  }
  return 0;
}