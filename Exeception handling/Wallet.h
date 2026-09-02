#pragma once
#include<iostream>
#include"customexception.h"
using namespace std;
class Wallet
{
private:
	int walletId;
	string holderName;
	double balance;
	
	double int_rate = 15;
public:
	Wallet() {

	}
	Wallet(int walletId,
		string holderName,
		double balance) 
	{
		this->walletId = walletId;
		this->holderName = holderName;
		this->balance = balance;
	}
	void accept()
	{
		cout << "enter the details :" << endl;
		cout << "walletId : " << endl;
		cin >> walletId;
		cout << "holder name is :" << endl;
		cin >> holderName;
		cout << "balance is: " << endl;
		cin >> balance;
		if (balance < 0) {
			custom_exception ex("balance cant be zero");
				throw ex;

		}
}
	void display()
	{
		cout << "wallet details are ------------:" << endl;
		cout << "walletid: " << walletId << endl;
		cout << "holder name is : " << holderName;
		cout << "balance is: " << balance << endl;

	}
	double add_money()
	{
		double amount;
		cout << "enter money to add :" << endl;
		cin >> amount;
		balance = balance + amount;
		return balance;
	}
	double withdraw_money()
	{
		double amount;
		cout << "enter money :" << endl;
		cin >> amount;
		if (amount > balance) {
			custom_exception ex("withdraw account can't be more than balance");
			throw ex;
		}
		balance = balance - amount;
		return balance;
	}
	friend ostream& operator<<(ostream& o, Wallet& obj);
};

//void operator<<(ostream& o, Wallet& obj)
ostream& operator<<(ostream& o, Wallet& obj)
{
	o << "the complex num is " << obj.balance << obj.int_rate <<endl;
	return o;
}