// 4. Accept the basic salary of an employee and compute the net salary after adding earnings and subtracting
// deductions.
// PF is 2 % of basic
// Tax is 3 % of basic
// HRA is 5 % basic
// DA is 8 % of basic

#include<stdio.h>

int main(){
    float basic_sal , net_sal ;
    printf("enter the salary :");
    scanf("%f ", &basic_sal);

    float PF , TAX , HRA , DA ;
    PF = 2 * basic_sal / 100 ;
    TAX  = 3 * basic_sal / 100;
    HRA = 5 * basic_sal / 100;
    DA = 8 * basic_sal / 100; 

    net_sal = basic_sal - (PF + TAX + HRA + DA) ;

    printf(" net salary is %f: ", net_sal);

    return 0 ;

    
}