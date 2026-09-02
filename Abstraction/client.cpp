#include"Economy.h"
#include"Business.h"
#include"FirstClass.h"

int main()
{
    FlightTicket *ptr;

    ptr = new Economy("snehil", "MA-101", 2000, 100, 200, 500);

    ptr->display();

    cout << "\nTotal Fare: " << ptr->calculateTotalFare();

    ptr->printBoardingPass();

    delete ptr;

   

    //string passengerName,string FlightNo, double baseFare,double conciergeServiceFee,double flatOversizePenalty)
    ptr = new FirstClass("sourav","CH-103", 4000, 3000,1000 );

    ptr->display();

    cout<<"\n total fare is : "<< ptr-> calculateTotalFare();

    ptr->printBoardingPass();

    delete ptr;

 return 0;

}