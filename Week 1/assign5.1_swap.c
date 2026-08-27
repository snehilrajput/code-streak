//5. Accept two numbers and swap two numbers using
//ii) By performing arithmetic operations

#include<stdio.h>

int main(){
    int a , b ;

    printf("enter 2 numbers : ");
    scanf("%d\n, %d , &a,  &b");

    a = a + b ; // 20 + 10 = 30  a = 20 b = 10 
    b = a - b ; // 20  10 = 10 
    a = a - b ; // 30 - 10 = 20 

    printf("after swapping : \n");
    printf("a = %d , b = %d ", a , b );
}