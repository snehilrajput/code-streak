
#include"FlightTicket.h"

class FirstClass : public FlightTicket
{
protected:
double conciergeServiceFee;
double baseFare;
double flatOversizePenalty;
public:
    FirstClass(string passengerName,string FlightNo, double baseFare,double conciergeServiceFee,double flatOversizePenalty)
    :FlightTicket(passengerName,FlightNo, baseFare){
        this->conciergeServiceFee = conciergeServiceFee;
        this->flatOversizePenalty = flatOversizePenalty;

    }
double calculateTotalFare()override{
    return baseFare + conciergeServiceFee + flatOversizePenalty;
   
 }
void printBoardingPass() override
    {
        cout << "\nFirstclass Boarding Pass";
    }
};
