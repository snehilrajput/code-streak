#pragma once
#include<iostream>
#include<string>
using namespace std;
 class Patient
 {
    protected:
    int patient_id;
    string patient_name;
    int admit_days;
    static int count;
    float bill;
    public:
     
    Patient()
    {
        count++;
        patient_id=count;
        patient_name="xyz";
        admit_days=5;
    }
    Patient(string patient_name,int admit_days)
    {
        count++;
        this->patient_id=count;
        this->patient_name=patient_name;
        this->admit_days=admit_days;
    }
    void accept()
    {
        cout<<"Enter the details of the patient : "<<endl;
        cout<<"Patient Name: "<<endl;
        cin>>patient_name;
        cout<<"Admit Days "<<endl;
        cin>>admit_days;
    }

virtual float calculateBill()
{   
    bill = admit_days*2000;
    cout<< bill <<endl;
} 

virtual void displaydetails()
{
    cout<<"Patient Details are: "<<endl;
    cout<<"Patient Id: "<<count<<endl;
    cout<<"Patient Name: " <<patient_name<<endl;
    cout<<"Admit Days: " << admit_days<<endl;
    //cout<<"Total Bill: " <<calculateBill()<<endl;

}

};
int Patient:: count=0;
