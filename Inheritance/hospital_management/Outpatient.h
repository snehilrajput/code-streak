#pragma once
#include"Patient.h"
// #include"Inpatient.h"

class outpatient : public Patient
{  
protected:
   int outp_id;
   string outp_name;
   int admit_day;
   float bill ;
   static int count;
public:   
   outpatient(){
    count++;
    outp_id = count;
    outp_name = "xyz";
    admit_day = 5;
   

   }
   outpatient(string patient_name,int admit_days,int outp_id, string outp_name, int admit_day):Patient(patient_name, admit_days)
   {
    count++;
    this->outp_id= count;
    this->outp_name = outp_name;
    this->admit_day= admit_day;
   }
   void accept(){
    Patient::accept();
    cout<<"enter deatils of outpatient are: "<<endl;
    cout<< "inpatient id is " << count << endl;
    cout<< "enter name of outpatient :"<<endl;
    cin>>outp_name;
   }
   void displaydetails(){
    Patient::displaydetails();
    cout<<"deatils of outpatient are:"<<endl;
    cout<< "outpatient name is "<< outp_name<<endl;
    cout<< "id is "<< outp_id <<endl;
   }
//    void float calculateBill(){
//     bill = admit_day*2000;
//     cout<< bill <<endl;
//    }

   
};
 int outpatient:: count = 0;