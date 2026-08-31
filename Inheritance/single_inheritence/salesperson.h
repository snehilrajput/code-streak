#pragma once
#include "Employee.h"

class salesperson : public Employee
{
protected:
    int nos;
    float comm;

public:
    salesperson() : Employee()
    {
        nos = 2665;
        comm = 251;
    }

    salesperson(string emp_name, double emp_salary, int nos, float comm)
        : Employee(emp_name, emp_salary)
    {
        this->nos = nos;
        this->comm = comm;
    }

    void accept()
    {
        Employee::accept();
        cout << "Enter the number of sales: " << endl;
        cin >> nos;
        cout << "Enter the commission: " << endl;
        cin >> comm;
    }

    void display()
    {
        Employee::display();
        cout << nos << endl << comm << endl;
    }
};