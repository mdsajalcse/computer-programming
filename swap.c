#include<stdio.h>
int main(){

   double first_value, second_value, swap_value;
   printf("Enter your first value::");
   scanf("%lf",& first_value);
   printf("Enter your second value::");
   scanf("%lf",& second_value);
   swap_value=first_value;
   first_value=second_value;
   second_value=swap_value;
   printf("After swapping value:::%.2lf",first_value);
   printf("\n");
   printf("After swapping value:::%.2lf",second_value);

  return 0;

}
