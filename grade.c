#include<stdio.h>
int main(){

     int marks;
     printf("Enter your marks::");
     scanf("%d",&marks);

     if(marks<0 || marks>100){
        printf("sorry ! your enter wrong value !!!!");
     }
    else if(marks>=80 && marks<=100){
        printf("your result is::A+");

     }
        else if(marks<=79 && marks>=70){
        printf("your result is::A");
     }
        else if (marks<=69 && marks>=60){
        printf("your result is::A-");
     }
     else if(marks<=59 && marks>=50){
        printf("your result is::B+");
    }
       else if (marks<=49 && marks>=46){
        printf("your result is::B-");
    }
       else if (marks<=45 && marks>=40){
        printf("your result is::C");
    }
       else if (marks<=39 && marks>=33){
        printf("your result is::D");
    }
    else {
        printf("sorry you failed\n");
        printf("Your Grade is::F! ");
    }
    return 0;
}
