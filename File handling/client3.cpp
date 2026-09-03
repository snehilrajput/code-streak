#include<iostream>
#include<fstream>
#include"FileIO.h"
using namespace std;

int main()
{
char wish = 'y';
do{

    int choice ;
    cout<<"1.read the data from file : 2. write a record in the file "<<endl;

    cout <<"enter the choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            FileIO::ReadData();
            break;
        case 2:
            FileIO::WriteData();
            break;
         default:
                cout << "Invalid choice!" << endl;
                break;
    }
cout<<"do you want to continue ? ";
cin>>wish;
    
} while(wish == 'y' || wish =='Y');

return 0;
}