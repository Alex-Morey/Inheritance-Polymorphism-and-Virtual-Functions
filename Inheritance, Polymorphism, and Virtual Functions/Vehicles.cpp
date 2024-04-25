// Alexander Morey
// CIS 1202 101
// 4/24/2024

#include "Vehicles.h"

using namespace std;

Vehicles::Vehicles()
{
	_year = 0;
	_manufacturer = "";
}

void Vehicles::setManufacturer(string manufacturer)
{
	_manufacturer = manufacturer;
}

void Vehicles::setYear(int year)
{
	_year = year;
}

string Vehicles::getManufacturer()
{
	return _manufacturer;
}

int Vehicles::getYear()
{
	return _year;
}

void Vehicles::Displayinfo()
{
	cout << "Vehicle Information:\nManufacturer: " << _manufacturer << "\nYear Built: " << _year << endl;
}