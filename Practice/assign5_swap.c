//5. Accept two numbers and swap two numbers using

#include<stdio.h>


int main()
{
    int i, j, temp ;
printf("enter two numbers : " )   ; 
scanf("%d %d ", &i , &j);
printf("before swap :%d %d", i , j  )   ;

  
temp = i ;
i = j; 
j = temp;
printf("after swap :" ) ; 
printf("%d %d", i , j );

return 0 ;
}

