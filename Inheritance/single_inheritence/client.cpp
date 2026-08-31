
#include "Employee.h"
#include "salesperson.h"
#include "manager.h"

int main()
{
    salesperson sp1;
    sp1.display();
    salesperson sp2("Nidhi",1546235,258,300);
    sp2.accept();
    sp2.display();

    
    manager m1;
    m1.display();
    manager m2("snehil", 123560, 34500 );
    m2.accept();
    m2.display();
}


