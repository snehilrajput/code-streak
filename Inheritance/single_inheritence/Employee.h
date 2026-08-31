
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int emp_id;
    string emp_name;
    double emp_salary;
    static int count;

public:
    Employee()
    {
        count++;
        emp_id = count;
        emp_name = "NA";
        emp_salary = 1263845;
    }

    Employee(string name, double salary)
    {
        count++;
        this->emp_id = count;
        this->emp_name = name;
        this->emp_salary = salary;
    }

    void accept()
    {
        cout << "Enter the details of the employee:" << endl;
        cout << "Enter name: " << endl;
        cin >> emp_name;
        cout << "Enter salary: " << endl;
        cin >> emp_salary;
    }

    void display()
    {
        cout << "The details of the employee are: " << endl;
        cout << emp_id << endl << emp_name << endl << emp_salary << endl;
    }
};

int Employee::count = 0;