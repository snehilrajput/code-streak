#pragma once
#include<exception>
#include<cstring>

using namespace std;
class custom_exception : public exception
{
private:
	char errMsg[50];
public:
	custom_exception(const char* errMsg)
	{
		strcpy(this->errMsg, errMsg);
	}
	const char* what() const throw()
	{
		return errMsg;

	}
};