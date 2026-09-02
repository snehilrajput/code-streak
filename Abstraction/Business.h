#include"FlightTicket.h"

class Business : public FlightTicket 
{
protected:    
    double extraBagFeePerKg;
    double seatSelectionFee;
    double excessBaggageCharges;

public:
    Business(string passengerName,string FlightNo, double baseFare,double extraBagFeePerKg, double seatSelectionFee,double excessBaggageCharges ) 
    :FlightTicket(passengerName,FlightNo, baseFare ){
        this->extraBagFeePerKg = extraBagFeePerKg;
        this->seatSelectionFee = seatSelectionFee;
        this->excessBaggageCharges = excessBaggageCharges;
    } 
 double calculateTotalFare( )override
 {  
    double  excessBaggageCharges;
   return baseFare + seatSelectionFee + excessBaggageCharges;
    
 }   
void printBoardingPass() override
    {
        cout << "\nBusiness Boarding Pass";
    }

};


