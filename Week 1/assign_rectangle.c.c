// 10. Accept program for Area and Perimeter Of Rectangle.

#include<stdio.h>

int main(){
   int l , b ; 
  
   
   printf("length is ");
   scanf("%d", &l);
   
   printf("breadth is ", b);
   scanf("%d", &b);

 
   int  Area  = l * b;
   int Perimeter = 2 * (l + b);

   printf("area of reactangle is %d: ", Area);
   printf("perimeter of rectangle is %d: ", Perimeter);

   return 0 ;

}