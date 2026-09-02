// 3. Accept marks of 5 subjects (out of 100) of a student and display total marks and compute the
// percentage also.

#include<stdio.h>

int main()
{
    int num1 , num2 , num3 , num4 ,num5 ;
    int total ;
    float percentage ; 

    printf(" Enter the marks of 5 subject : ");
    scanf("%d %d %d %d %d", &num1 ,&num2 , &num3 , &num4 , &num5);

    total = num1 + num2 + num3 + num4 + num5 ;
    percentage = total / 5;

    printf("total marks is %d : " , total );
    printf("total percentage : %f ", percentage);

    return 0 ;



}