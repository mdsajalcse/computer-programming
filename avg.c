#include<stdio.h>
int main(){

    double avg,sum,num1,num2,num3;
    printf("Enter your first number::");
    scanf("%lf",&num1);
    printf("Enter your second number::");
    scanf("%lf",&num2);
    printf("Enter your third number::");
    scanf("%lf",&num3);
    sum=num1+num2+num3;
    avg=sum/3;
    printf("average value is:::%lf",avg);

    return 0;




}
