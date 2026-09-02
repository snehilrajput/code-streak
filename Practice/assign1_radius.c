//1. Accept the radius from user and compute the area and circumference of a circle.
//----------------------------------AREA-----------------------
#include<stdio.h>

int main()
{

 float r , Area , circumference;

 printf("enter radius: ");
 scanf("%f", &r);
 
 Area =  3.14*r*r  ;
 circumference = 2*3.14*r;


 printf("radius is %f\n", r);
 printf("area is %f\n ",Area);

 printf("circumference is : %f", circumference);
 
//-------------------------------circumference---------------------


}
