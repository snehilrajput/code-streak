
#pragma once
#include "Employee.h"

class manager : public Employee
{
protected:
    float incent;

public:
    manager() : Employee()
    {
        incent = 12900;
    }

    manager(string emp_name, double emp_salary, float incent)
        : Employee(emp_name, emp_salary)
    {
        this->incent = incent;
    }

    void accept()
    {
        Employee::accept();
        cout << "details of manager : " << endl;
        cout << "enter the incentive :" << endl;
        cin >> incent;
    }

    void display()
    {
        Employee::display();
        cout << "details of manager are: " << endl;
        cout << incent << endl;
    }
};
