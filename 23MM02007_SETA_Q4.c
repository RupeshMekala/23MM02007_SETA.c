#include <stdio.h>

int main()
{
  int num,n1,n2;
  printf("Enter your number : ");
  scanf("%d",&num);  
  for(int n1=2,n2=num-2;n1<num-2,n2>1;n1++,n2--){
        int is_n1_prime = 1; 
        int is_n2_prime = 1; 

        for (int i = 2; i * i <= n1; i++) {
            if (n1 % i == 0) {
                is_n1_prime = 0; 
                break;
            }
        }
        
        
        for (int i = 2; i * i <= n2; i++) {
            if (n2 % i == 0) {
                is_n2_prime = 0; 
                break;
            }
        }

      if (is_n1_prime && is_n2_prime){
        printf("%d %d\n",n1,n2);
      }

  }
  return 0;
}
   
