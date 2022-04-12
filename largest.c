#include<stdio.h>
int main(){


   double num1,num2,num3;
   printf("Enter your numbers::");
   scanf("%lf %lf %lf",&num1,&num2,&num3);
   if((num1>num2)&&(num1>num3)){

    printf("num1 is greatest..");
   }
   else if((num2>num3)&&(num2>num1)){
    printf("num2 is greatest..");

   }
   else{
    printf("num3 is greatest..");
   }

return 0;
}
