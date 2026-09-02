#pragma once 
#include<iostream>
using namespace std;

class FlightTicket
{
protected:
    string passengerName;
    string FlightNo;
    double baseFare;
    
public:
    FlightTicket(string passengerName,string FlightNo, double baseFare){
        this->passengerName = passengerName;
        this->FlightNo = FlightNo;
        this->baseFare = baseFare;
    }
virtual double calculateTotalFare() = 0;
virtual void printBoardingPass() = 0;

virtual void display(){
    cout<<"\n passanger name :" <<passengerName <<endl;
    cout<<"\n flight no :"      << FlightNo <<endl;
    cout<<"\n baseFare :"       <<baseFare  <<endl;

}
};


