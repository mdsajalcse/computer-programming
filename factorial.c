///factorial_number_calculate
#include<stdio.h>
int main(){

    int i=1,number,fact=1;
    printf("Enter your number to find factorial::");
    scanf("%d",&number);
   /* for(i=1;i<=number;i++){
        fact=fact*i;

    }*/

     while(i<=number){
        fact=fact*i;
        i++;
     }

    printf("Factorial of %d is: %d",number,fact);


return 0;
}
