#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class Product 
{
private:
    int pid;
    char name[50];
    double price;
public:
    Product()
    {
    pid = 1;
    strcpy(name , "snehil");
    price = 1000;
    }
    Product(int pid , const char* name , double price ){
        this->pid = pid ;
        strcpy(this->name , name);
        this->price = price;
    }
    void accept()
    {
        cout<<"enter details :" <<endl;
        cout << "\nEnter Product ID   : ";
        cin >> pid;
        cout << "Enter Product Name : ";
        cin >> name;
        cout << "Enter Product Price: ";
        cin >> price;
    }
    void display()
    {
        cout<<"---------details of product are :-----------";

        cout<<"product id : \n"<<pid <<endl;
        cout<<"product name : \n"<<name <<endl;
        cout<<"product price :\n"<<price <<endl;
    }

};

