// 12. Write a c programs to display Simple interest.

#include<stdio.h>

int main(){
    int amount ;
    float interest ;
    int time ;

    printf("enter amount :");
    scanf("%d", &amount);
    scanf("%f", &interest);
    scanf("%d", &time);


    float simple_interest = (amount*interest*time) /100;

    printf("simple interest is : %f", simple_interest);
}