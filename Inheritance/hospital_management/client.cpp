#include"Patient.h"
#include"Inpatient.h"
#include"outpatient.h"
#include <typeinfo>

class printToscreen
{
    public:
    static void displayDetails(Patient* eptr)
    {
        eptr->displaydetails();

        cout << "\n bill is " ;
        eptr-> calculateBill();
    

    if(typeid(*eptr) == typeid(Inpatient))
        {
            Inpatient* mptr = dynamic_cast<Inpatient*>(eptr);
            //dynamic cast operator perform a downcasting
            //of a generic pointer eptr type Employee* to Manager*
            mptr->diseasespat();
        }

    
    }
};
int main(){
    // Patient p1();
    // p1.displaydetails();

    Patient p2("xys", 6 );
    p2.accept();
    p2.displaydetails();

    //(string patient_name,int admit_days,int Inp_id, string Inp_name):Patient(patient_name, admit_days)
    Patient* eptr = new Inpatient ("Rahul", 4,1, "Malaria");
    
    // Call the static helper method to display details and trigger dynamic casting
   printToscreen::displayDetails(&p2);

    // Clean up memory
    delete eptr; 


    return 0;
}