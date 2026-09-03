#pragma once 
#include<fstream>
#include"Product.h"
using namespace std;

class FileIO
{
public:
    static void ReadData()
    {

    fstream fs;
    Product p1;
    fs.open("ProductData.dat", ios::in | ios::app | ios::binary);
    // if (!fs) {
    //         cout << "No data file found yet!" << endl;
    //         return;
    //     }
        
    while(fs.read((char*)&p1, sizeof(Product)))
		{
			p1.display();
		}
		fs.close();
	}
    static void WriteData()
    {
        fstream fs;
        Product p1;
       
       char wish;
		//p1.accept();
		fs.open("ProductData.dat", ios::out | ios::binary);
		do
		{
			p1.accept();
			fs.write((char*)&p1, sizeof(Product));
			cout << "\n do u wnat to add more records:";
			cin >> wish;
		} while (wish == 'y' || wish == 'Y');
		cout << "\n all records written into file successfully";
		fs.close();
    }
};