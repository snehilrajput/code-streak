#include"FlightTicket.h"

class Economy : public FlightTicket 
{
protected:    
    double extraBagFeePerKg;
    double seatSelectionFee;
    double excessBaggageCharges;

public:
    Economy(string passengerName,string FlightNo, double baseFare,double extraBagFeePerKg, double seatSelectionFee,double excessBaggageCharges ) 
    :FlightTicket(passengerName,FlightNo, baseFare ){
        this->extraBagFeePerKg = extraBagFeePerKg;
        this->seatSelectionFee = seatSelectionFee;
        this->excessBaggageCharges = excessBaggageCharges;
    } 
double calculateTotalFare()override
 {  
    //double  excessBaggageCharges;
   return baseFare + seatSelectionFee + excessBaggageCharges;
    
 }   
 void printBoardingPass() override
    {
        cout << "\nEconomy Boarding Pass";
    }


};


