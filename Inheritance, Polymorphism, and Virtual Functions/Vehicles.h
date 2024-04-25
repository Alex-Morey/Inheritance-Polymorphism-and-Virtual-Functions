#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vehicles
{
public:
	Vehicles();
	void setManufacturer(string manufacturer);
	void setYear(int year);
	string getManufacturer();
	int getYear();
	void Displayinfo();

private:
	string _manufacturer;
	int _year;

};
