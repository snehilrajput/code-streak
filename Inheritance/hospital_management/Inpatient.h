#pragma once
#include"Patient.h"

class Inpatient : public Patient
{  
protected:
   string diseases;
   int Inp_id;
   string Inp_name;
   static int count;
public:   
   Inpatient(){
    count++;
    Inp_id = count;
    Inp_name = "xyz";

   }
   Inpatient(string patient_name,int admit_days,int Inp_id, string Inp_name):Patient(patient_name, admit_days)
   {
    count++;
    this->Inp_id= count;
    this->Inp_name = Inp_name;
   }
   void accept(){
    Patient::accept();
    cout<<"enter deatils of inpatient are: "<<endl;
    cout<< "inpatient id is " << Inp_id << endl;
    cout<< "enter name of patient :"<<endl;
    cin>>Inp_name;
   }
   void displaydetails(){
    Patient::displaydetails();
    cout<<"deatils of inpatient are:"<<endl;
    cout<< "patient name is "<< Inp_name<<endl;
    cout<< "id is "<< Inp_id <<endl;

   }

   void diseasespat(){
    diseases = "fever";
    cout<< "patient is suffering from "<< diseases <<endl;
   }
   
};
 int Inpatient :: count = 0;

