// 6. Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2πr 2 + 2πrh,
// volume = π r 2 h). Define a constant variable pi=3.14.

#include<stdio.h>

int main()
{ 
    float r , h ;
    
    printf("Enter of radius and height : ");
    scanf("%f %f", &r , &h);

    float surface_area = 2 * 3.14 * r*r + 2 * 3.14 * r * h ;
    float volume = 3.14*r*r*h;

    printf("suface area is: %f", surface_area);
    printf("surface volume is : %f", volume);

    return 0 ;
     


}